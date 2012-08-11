Class FirstSite 
  'Implements IFirstSite
  Public Function IFirstSite_InnerDo(ByVal A)
    IFirstSite_InnerDo = 20 + A
  End Function
End Class

Dim First
Set First = WScript.CreateObject("AlaxInfo.VbsCallback.First")
Result = First.OuterDo(300, new FirstSite)
WScript.Echo Result
