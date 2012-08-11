Function InnerDo(ByVal A)
    InnerDo = 20 + A
End Function

Dim Second
Set Second = WScript.CreateObject("AlaxInfo.VbsCallback.Second")
Result = Second.OuterDo(300, GetRef("InnerDo"))
WScript.Echo Result
