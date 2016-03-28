Function state_OnReady()
    WScript.Echo "state_OnReady"
End Function

Dim state
Set state = WScript.CreateObject("ComEvents01.ParserState", "state_")
'WScript.ConnectObject state, "state_"
state.Initialize


