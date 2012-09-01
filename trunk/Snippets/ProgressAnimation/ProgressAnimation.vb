Imports System.Diagnostics
Imports System.Drawing
Imports System.Drawing.Imaging
Imports System.Drawing.Drawing2D

Public Class ProgressAnimation
    Private Const Spacing As Integer = 4
    Private Const LeafCount As Integer = 13
    Private Const RelativeOuterRadius As Double = 0.95
    Private Const RelativeInnerRadius As Double = 0.2
    Private Const RelativeInnerAngleSkew As Double = -30 * Math.PI / 180 ' 30 degrees skew
    Private Const RelativeLeafSpacing As Double = 0.2
    Private Const UpdateInterval As Integer = 75 ' 75 milliseconds
    Private Const Period As Integer = 13000 ' 13 seconds
    Private ForegroundColor As Color = Color.MidnightBlue
    Private WithEvents UpdateTimer As Timer
    Private AnchorTickCount As Integer

    Private Sub ProgressAnimation_Load(sender As System.Object, e As System.EventArgs) Handles MyBase.Load
        DoubleBuffered = True
    End Sub
    Private Sub ProgressAnimation_VisibleChanged(sender As Object, e As System.EventArgs) Handles Me.VisibleChanged
        If Visible Then
            UpdateTimer = New Timer
            UpdateTimer.Interval = UpdateInterval
            UpdateTimer.Start()
            AnchorTickCount = Environment.TickCount
            Invalidate()
        Else
            If UpdateTimer IsNot Nothing Then UpdateTimer.Stop()
            UpdateTimer = Nothing
        End If
    End Sub
    Private Sub ProgressAnimation_Paint(sender As Object, e As System.Windows.Forms.PaintEventArgs) Handles Me.Paint
        Dim Span As Integer = Math.Min(Width, Height) / 2 - Spacing
        If Span <= 0 Then Exit Sub
        Dim Origin As SizeF = New SizeF(Width / 2, Height / 2)
        Dim OutlinePen As Pen = New Pen(ForegroundColor, 1)
        e.Graphics.SmoothingMode = SmoothingMode.AntiAlias
        For LeafIndex As Integer = 0 To LeafCount - 1
            Dim Position As Double = ((Environment.TickCount - AnchorTickCount) Mod Period) / Period + 0.55
            Position += 1.0 * LeafIndex / LeafCount
            While Position > 1
                Position -= 1
            End While
            Debug.Assert(Position >= 0 AndAlso Position <= 1)
            Dim FillBrush As Brush = New SolidBrush(Color.FromArgb(31 + 224 * Math.Exp(-1.5 * Position), ForegroundColor))
            Dim AngleA As Double = 2 * Math.PI * LeafIndex / LeafCount
            Dim AngleC As Double = 2 * Math.PI * (LeafIndex + 1) / LeafCount
            Dim AngleB As Double = AngleA * (RelativeLeafSpacing) + AngleC * (1 - RelativeLeafSpacing)
            Dim PointA1 As PointF = New PointF(Math.Sin(AngleA) * Span * RelativeOuterRadius, Math.Cos(AngleA) * Span * RelativeOuterRadius)
            Dim PointA2 As PointF = New PointF(Math.Sin(AngleA + RelativeInnerAngleSkew) * Span * RelativeInnerRadius, Math.Cos(AngleA + RelativeInnerAngleSkew) * Span * RelativeInnerRadius)
            Dim PointB1 As PointF = New PointF(Math.Sin(AngleB) * Span * RelativeOuterRadius, Math.Cos(AngleB) * Span * RelativeOuterRadius)
            Dim PointB2 As PointF = New PointF(Math.Sin(AngleB + RelativeInnerAngleSkew) * Span * RelativeInnerRadius, Math.Cos(AngleB + RelativeInnerAngleSkew) * Span * RelativeInnerRadius)
            Dim AngleD As Double = (AngleA + AngleB) / 2
            Dim PointD1 As PointF = New PointF(Math.Sin(AngleD) * Span * RelativeOuterRadius, Math.Cos(AngleD) * Span * RelativeOuterRadius)
            Dim PointD2 As PointF = New PointF(Math.Sin(AngleD + RelativeInnerAngleSkew) * Span * RelativeInnerRadius, Math.Cos(AngleD + RelativeInnerAngleSkew) * Span * RelativeInnerRadius)
            Dim Path As GraphicsPath = New GraphicsPath
            Path.AddLine(PointA1 + Origin, PointA2 + Origin)
            Path.AddCurve(New PointF() {PointA2 + Origin, PointD2 + Origin, PointB2 + Origin})
            Path.AddLine(PointB1 + Origin, PointB1 + Origin)
            Path.AddCurve(New PointF() {PointB1 + Origin, PointD1 + Origin, PointA1 + Origin})
            e.Graphics.FillPath(FillBrush, Path)
            If Span >= 200 Then e.Graphics.DrawPath(OutlinePen, Path)
        Next
    End Sub
    Private Sub UpdateTimer_Tick(sender As Object, e As System.EventArgs) Handles UpdateTimer.Tick
        Invalidate()
    End Sub
End Class
