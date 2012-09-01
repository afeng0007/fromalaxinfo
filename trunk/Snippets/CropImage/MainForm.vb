Imports System.Diagnostics
Imports System.Drawing
Imports System.Drawing.Imaging

Public Class MainForm
    Private WithEvents Box As ImageCropBox
    Private DefaultText As String

    Private Sub MainForm_Load(sender As System.Object, e As System.EventArgs) Handles MyBase.Load
        DefaultText = Text
        Box = New ImageCropBox
        Box.MinimalSelectionSize = New Size(320, 240)
        Box.Image = Bitmap.FromFile("D:\Projects\Alax.Info\Repository-Public\Snippets\CropImage\20120821_185619.jpg")
        Controls.Add(Box)
        Box.Dock = DockStyle.Fill
        Dim CurrentScreen As Screen = Screen.FromControl(Me)
        Width = CurrentScreen.WorkingArea.Width * 7 / 8
        Height = CurrentScreen.WorkingArea.Height * 7 / 8
        Left = (CurrentScreen.WorkingArea.Width - Width) / 2
        Top = (CurrentScreen.WorkingArea.Height - Height) / 2
    End Sub
    Private Sub MainForm_KeyPress(sender As System.Object, e As System.Windows.Forms.KeyPressEventArgs) Handles MyBase.KeyPress
        If e.KeyChar = Chr(27) Then Close()
    End Sub
    Private Sub MainForm_SelectionChanged(sender As System.Object, e As System.EventArgs) Handles Box.SelectionRectangleChanged
        Text = String.Format("{0} - {1}", DefaultText, Box.SelectionRectangle)
    End Sub
    Private Sub Box_SelectionDoubleClick(sender As Object, e As System.EventArgs) Handles Box.SelectionDoubleClick
        Me.Close()
    End Sub
End Class
