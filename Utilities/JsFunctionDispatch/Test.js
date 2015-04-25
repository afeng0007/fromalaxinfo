////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2015
// Created by Roman Ryltsov roman@alax.info

foo = WScript.CreateObject("AlaxInfo.JsFunctionDispatch.Foo");
foo.Bar(function (text) {
    WScript.Echo("Text: " + text);
});
WScript.Echo("Waiting for worker thread callbacks");
