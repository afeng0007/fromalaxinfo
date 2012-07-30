Function Test_Event(Text)
  WScript.Echo "Event: " + Text
End Function

Dim Test
Set Test = WScript.CreateObject("AlaxInfo.VbsEvents.Foo", "Test_")
Test.Method("Event Fun")
