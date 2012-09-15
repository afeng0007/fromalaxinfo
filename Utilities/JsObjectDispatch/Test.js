////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

foo = WScript.CreateObject("AlaxInfo.JsObjectDispatch.Foo");

function InstanceOf(object, type) {
    return object instanceof type;
}

foo.bar(new Error());
foo.bar(Error);
foo.bar(InstanceOf(new Error(), Error));
foo.bar(InstanceOf(new Error(), Date));
