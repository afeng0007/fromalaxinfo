Sub Third_InnerDo(ByRef C)
  C = C + 20
End Sub

Dim Third
Set Third = WScript.CreateObject("AlaxInfo.VbsCallback.Third", "Third_")
Result = Third.OuterDo(300)
WScript.Echo Result
