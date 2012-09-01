Imports System.Diagnostics
Imports System.Drawing
Imports System.Drawing.Imaging
Imports System.Drawing.Drawing2D

Public Class ImageCropBox
    Private Const Spacing As Integer = 2
    Private Const SpotSize As Integer = 7
    Private _Image As Bitmap
    Private _FadeImage As Bitmap
    Private _MinimalSelectionSize As Size
    Private _SelectionRectangle As Rectangle
    Private ClientImageOrigin As Point
    Private ClientImageExtent As Size
    Private ClientSelectionRectangle As Rectangle
    Private BoundaryPenA As Pen
    Private BoundaryPenB As Pen
    Private SpotBrush As Brush
    Private SpotPen As Pen
    Private DragSpotIndex As Integer ' 0..3 Corner Resize, 4 Body Move
    Private MouseDownSelection As Rectangle
    Private MouseDownPosition As Point

    Public Event SelectionRectangleChanged As EventHandler
    Public Event SelectionDoubleClick As EventHandler

    Public Sub New()
        ' This call is required by the designer.
        InitializeComponent()
        ' Add any initialization after the InitializeComponent() call.
        _MinimalSelectionSize = New Size(0, 0)
    End Sub

    Public Property Image As Bitmap
        Get
            Image = _Image
        End Get
        Set(value As Bitmap)
            _Image = value
            If _Image IsNot Nothing Then
                _SelectionRectangle = New Rectangle(value.Width * 1 / 16, value.Height * 1 / 16, value.Width * 14 / 16, value.Height * 14 / 16)
                '_SelectionRectangle = New Rectangle(0, 0, value.Width, value.Height)
                _FadeImage = _Image.Clone
                Dim FadeImageGraphics As Graphics = Graphics.FromImage(_FadeImage)
                Dim FadeBrush As HatchBrush = New HatchBrush(HatchStyle.Percent25, Color.FromArgb(0, Color.Black), Color.FromArgb(255, Color.Black))
                FadeImageGraphics.FillRectangle(FadeBrush, 0, 0, _FadeImage.Width, _FadeImage.Height)
                FadeImageGraphics.Save()
            Else
                _FadeImage = Nothing
            End If
            Update()
        End Set
    End Property
    Public Property MinimalSelectionSize As Size
        Get
            MinimalSelectionSize = _MinimalSelectionSize
        End Get
        Set(value As Size)
            Debug.Assert(value.Width >= 0 And value.Height >= 0)
            _MinimalSelectionSize = value
            ' TODO: Update SelectionRectangle
        End Set
    End Property
    Public Property SelectionRectangle As Rectangle
        Get
            SelectionRectangle = _SelectionRectangle
        End Get
        Set(value As Rectangle)
            Dim SelectionRectangleChanged As Boolean = _SelectionRectangle <> value
            ' TODO: Validate against MinimalSelectionSize
            _SelectionRectangle = value
            RaiseEvent SelectionRectangleChanged(Me, New System.EventArgs())
            If SelectionRectangleChanged Then Invalidate()
        End Set
    End Property

    Private Sub ImageCropBox_Load(sender As System.Object, e As System.EventArgs) Handles MyBase.Load
        BoundaryPenA = New Pen(Brushes.White)
        BoundaryPenA.Width = 1
        BoundaryPenA.DashPattern = New Single() {8.0F, 4.0F}
        BoundaryPenB = New Pen(Brushes.Black)
        BoundaryPenB.Width = 1
        BoundaryPenB.DashPattern = New Single() {4.0F, 8.0F}
        BoundaryPenB.DashOffset = 4
        SpotBrush = Brushes.Black
        SpotPen = New Pen(Brushes.White)
        SpotPen.Width = 1
        ResizeRedraw = True
    End Sub
    Private Sub DrawSpot(Graphics As Graphics, Position As Point)
        Graphics.FillRectangle(SpotBrush, Position.X - CInt(SpotSize / 2) - 1, Position.Y - CInt(SpotSize / 2) - 1, SpotSize + 2, SpotSize + 2)
        Graphics.DrawRectangle(SpotPen, Position.X - CInt(SpotSize / 2), Position.Y - CInt(SpotSize / 2), SpotSize, SpotSize)
    End Sub
    Private Sub DrawSpot(Graphics As Graphics, PositionX As Integer, PositionY As Integer)
        DrawSpot(Graphics, New Point(PositionX, PositionY))
    End Sub
    Private Sub ImageCropBox_Paint(sender As System.Object, e As System.Windows.Forms.PaintEventArgs) Handles MyBase.Paint
        If Image Is Nothing Then Exit Sub
        Dim Extent = Me.Size
        Extent.Width -= Spacing + SpotSize + Spacing
        Extent.Height -= Spacing + SpotSize + Spacing
        If Extent.Width <= 0 Or Extent.Height <= 0 Then Exit Sub
        Debug.Assert(Image.Width > 0 AndAlso Image.Height > 0)
        Dim Ratio As Double = Math.Max(Image.Width / Extent.Width, Image.Height / Extent.Height)
        If Ratio > 1 And Ratio < 1.1 Then Ratio = 1.0 ' Snap to 100%
        ClientImageExtent.Width = Math.Round(Image.Width / Ratio)
        ClientImageExtent.Height = Math.Round(Image.Height / Ratio)
        ClientImageOrigin.X = Spacing + SpotSize / 2 + (Extent.Width - ClientImageExtent.Width) / 2
        ClientImageOrigin.Y = Spacing + SpotSize / 2 + (Extent.Height - ClientImageExtent.Height) / 2
        e.Graphics.DrawImage(_FadeImage, ClientImageOrigin.X, ClientImageOrigin.Y, ClientImageExtent.Width, ClientImageExtent.Height)
        ClientSelectionRectangle.X = Math.Round(_SelectionRectangle.Left / Ratio)
        ClientSelectionRectangle.Y = Math.Round(_SelectionRectangle.Top / Ratio)
        ClientSelectionRectangle.Width = Math.Round(_SelectionRectangle.Right / Ratio) - ClientSelectionRectangle.X
        ClientSelectionRectangle.Height = Math.Round(_SelectionRectangle.Bottom / Ratio) - ClientSelectionRectangle.Y
        ClientSelectionRectangle.Offset(ClientImageOrigin)
        e.Graphics.SetClip(ClientSelectionRectangle)
        e.Graphics.DrawImage(_Image, ClientImageOrigin.X, ClientImageOrigin.Y, ClientImageExtent.Width, ClientImageExtent.Height)
        e.Graphics.ResetClip()
        e.Graphics.DrawRectangle(BoundaryPenA, ClientSelectionRectangle)
        e.Graphics.DrawRectangle(BoundaryPenB, ClientSelectionRectangle)
        DrawSpot(e.Graphics, ClientSelectionRectangle.Left, ClientSelectionRectangle.Top)
        DrawSpot(e.Graphics, ClientSelectionRectangle.Right, ClientSelectionRectangle.Top)
        DrawSpot(e.Graphics, ClientSelectionRectangle.Left, ClientSelectionRectangle.Bottom)
        DrawSpot(e.Graphics, ClientSelectionRectangle.Right, ClientSelectionRectangle.Bottom)
    End Sub
    Private Function SourcePointFromPoint(Position As Point)
        Dim SourcePosition As Point
        SourcePosition.X = Math.Round((Position.X - ClientImageOrigin.X) * Image.Width / ClientImageExtent.Width)
        SourcePosition.Y = Math.Round((Position.Y - ClientImageOrigin.Y) * Image.Height / ClientImageExtent.Height)
        SourcePointFromPoint = SourcePosition
    End Function
    Private Function PointFromSourcePoint(SourcePosition As Point)
        Dim Position As Point
        Position.X = ClientImageOrigin.X + Math.Round(SourcePosition.X * ClientImageExtent.Width / Image.Width)
        Position.Y = ClientImageOrigin.Y + Math.Round(SourcePosition.Y * ClientImageExtent.Height / Image.Height)
        PointFromSourcePoint = Position
    End Function
    Private Function IsSpotPosition(SpotPosition As Point, Position As Point) As Boolean
        Dim SpotPositionEx = New Rectangle(SpotPosition.X - SpotSize / 2, SpotPosition.Y - SpotSize / 2, SpotSize, SpotSize)
        IsSpotPosition = SpotPositionEx.Contains(Position)
    End Function
    Private Function IsSpotPosition(SpotPositionX As Integer, SpotPositionY As Integer, PositionX As Integer, PositionY As Integer) As Boolean
        IsSpotPosition = IsSpotPosition(New Point(SpotPositionX, SpotPositionY), New Point(PositionX, PositionY))
    End Function
    Private Sub ApplyPointConstraint(ByRef Position As Point, P1 As Point, P2 As Point)
        If Position.X > P2.X Then Position.X = P2.X
        If Position.Y > P2.Y Then Position.Y = P2.Y
        If Position.X < P1.X Then Position.X = P1.X
        If Position.Y < P1.Y Then Position.Y = P1.Y
    End Sub
    Private Sub ImageCropBox_MouseMove(sender As Object, e As System.Windows.Forms.MouseEventArgs) Handles Me.MouseMove
        Dim Position As Point = e.Location, SourcePosition As Point
        If Capture Then
            Dim P1 As Point, P2 As Point
            Select Case DragSpotIndex
                Case 0 ' Left Top
                    P1 = ClientImageOrigin
                    P2 = PointFromSourcePoint(New Point(SelectionRectangle.Right - MinimalSelectionSize.Width, SelectionRectangle.Bottom - MinimalSelectionSize.Height))
                    ApplyPointConstraint(Position, P1, P2)
                    SourcePosition = SourcePointFromPoint(Position)
                    SelectionRectangle = Rectangle.FromLTRB(SourcePosition.X, SourcePosition.Y, SelectionRectangle.Right, SelectionRectangle.Bottom)
                Case 1 ' Right Top
                    P1 = New Point(ClientImageOrigin.X + ClientImageExtent.Width, ClientImageOrigin.Y)
                    P2 = PointFromSourcePoint(New Point(SelectionRectangle.Left + MinimalSelectionSize.Width, SelectionRectangle.Bottom - MinimalSelectionSize.Height))
                    ApplyPointConstraint(Position, New Point(P2.X, P1.Y), New Point(P1.X, P2.Y))
                    SourcePosition = SourcePointFromPoint(Position)
                    SelectionRectangle = Rectangle.FromLTRB(SelectionRectangle.Left, SourcePosition.Y, SourcePosition.X, SelectionRectangle.Bottom)
                Case 2 ' Left Bottom
                    P1 = New Point(ClientImageOrigin.X, ClientImageOrigin.Y + ClientImageExtent.Height)
                    P2 = PointFromSourcePoint(New Point(SelectionRectangle.Right - MinimalSelectionSize.Width, SelectionRectangle.Top + MinimalSelectionSize.Height))
                    ApplyPointConstraint(Position, New Point(P1.X, P2.Y), New Point(P2.X, P1.Y))
                    SourcePosition = SourcePointFromPoint(Position)
                    SelectionRectangle = Rectangle.FromLTRB(SourcePosition.X, SelectionRectangle.Top, SelectionRectangle.Right, SourcePosition.Y)
                Case 3 ' Right Bottom
                    P1 = PointFromSourcePoint(New Point(SelectionRectangle.Left + MinimalSelectionSize.Width, SelectionRectangle.Top + MinimalSelectionSize.Height))
                    P2 = ClientImageOrigin + ClientImageExtent
                    ApplyPointConstraint(Position, P1, P2)
                    SourcePosition = SourcePointFromPoint(Position)
                    SelectionRectangle = Rectangle.FromLTRB(SelectionRectangle.Left, SelectionRectangle.Top, SourcePosition.X, SourcePosition.Y)
                Case 4 ' Move
                    Dim Move As Size = e.Location - MouseDownPosition
                    Dim PreSelection As Rectangle = MouseDownSelection
                    PreSelection.Offset(Move)
                    PreSelection.Offset(Math.Max(0, -PreSelection.Left), Math.Max(0, -PreSelection.Top))
                    PreSelection.Offset(-Math.Max(0, PreSelection.Right - Image.Width), -Math.Max(0, PreSelection.Bottom - Image.Height))
                    SelectionRectangle = PreSelection
            End Select
            Exit Sub
        Else
            If IsSpotPosition(ClientSelectionRectangle.Left, ClientSelectionRectangle.Top, e.X, e.Y) Then
                Cursor = Cursors.SizeNWSE
                Exit Sub
            End If
            If IsSpotPosition(ClientSelectionRectangle.Right, ClientSelectionRectangle.Top, e.X, e.Y) Then
                Cursor = Cursors.SizeNESW
                Exit Sub
            End If
            If IsSpotPosition(ClientSelectionRectangle.Left, ClientSelectionRectangle.Bottom, e.X, e.Y) Then
                Cursor = Cursors.SizeNESW
                Exit Sub
            End If
            If IsSpotPosition(ClientSelectionRectangle.Right, ClientSelectionRectangle.Bottom, e.X, e.Y) Then
                Cursor = Cursors.SizeNWSE
                Exit Sub
            End If
            If ClientSelectionRectangle.Contains(e.Location) Then
                Cursor = Cursors.SizeAll
                Exit Sub
            End If
        End If
        Cursor = Cursors.Default
    End Sub
    Private Sub ImageCropBox_MouseDown(sender As Object, e As System.Windows.Forms.MouseEventArgs) Handles Me.MouseDown
        DragSpotIndex = -1
        MouseDownSelection = SelectionRectangle
        MouseDownPosition = e.Location
        If IsSpotPosition(ClientSelectionRectangle.Left, ClientSelectionRectangle.Top, e.X, e.Y) Then
            DragSpotIndex = 0
            Capture = True
            Exit Sub
        End If
        If IsSpotPosition(ClientSelectionRectangle.Right, ClientSelectionRectangle.Top, e.X, e.Y) Then
            DragSpotIndex = 1
            Capture = True
            Exit Sub
        End If
        If IsSpotPosition(ClientSelectionRectangle.Left, ClientSelectionRectangle.Bottom, e.X, e.Y) Then
            DragSpotIndex = 2
            Capture = True
            Exit Sub
        End If
        If IsSpotPosition(ClientSelectionRectangle.Right, ClientSelectionRectangle.Bottom, e.X, e.Y) Then
            DragSpotIndex = 3
            Capture = True
            Exit Sub
        End If
        If ClientSelectionRectangle.Contains(e.Location) Then
            DragSpotIndex = 4
            Capture = True
            Exit Sub
        End If
    End Sub
    Private Sub ImageCropBox_MouseUp(sender As Object, e As System.Windows.Forms.MouseEventArgs) Handles Me.MouseUp
        Capture = False
    End Sub
    Private Sub ImageCropBox_MouseDoubleClick(sender As Object, e As System.Windows.Forms.MouseEventArgs) Handles Me.MouseDoubleClick
        If ClientSelectionRectangle.Contains(e.Location) Then
            RaiseEvent SelectionDoubleClick(Me, New System.EventArgs)
            Exit Sub
        End If
    End Sub
End Class
