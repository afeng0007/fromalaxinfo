Imports System.Diagnostics
Imports System.Drawing
Imports System.Drawing.Imaging

Public Class MainForm
    Private WithEvents Animation As ProgressAnimation

    Private Sub MainForm_Load(sender As System.Object, e As System.EventArgs) Handles MyBase.Load
        Animation = New ProgressAnimation
        Controls.Add(Animation)
        Animation.Dock = DockStyle.Fill
        Dim CurrentScreen As Screen = Screen.FromControl(Me)
        Width = CurrentScreen.WorkingArea.Width * 7 / 8
        Height = CurrentScreen.WorkingArea.Height * 7 / 8
        Left = (CurrentScreen.WorkingArea.Width - Width) / 2
        Top = (CurrentScreen.WorkingArea.Height - Height) / 2
    End Sub
    Private Sub MainForm_KeyPress(sender As System.Object, e As System.Windows.Forms.KeyPressEventArgs) Handles MyBase.KeyPress
        If e.KeyChar = Chr(27) Then Close()
    End Sub
    Private Sub Animation_KeyPress(sender As System.Object, e As System.Windows.Forms.KeyPressEventArgs) Handles Animation.KeyPress
        If e.KeyChar = Chr(27) Then Close()
    End Sub
End Class
