////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Diagnostics;
using ServerLib;

namespace Client
{
    class Program
    {
        [STAThread]
        static void Main(string[] args)
        {
            Foo foo = new Foo();
            byte[] input = new byte[] { 1, 2, 3, 4 };
            byte[] output = foo.Bar(input);
            byte[] referenceOutput = new byte[] { 4, 3, 2, 1 };
            Debug.Assert(Enumerable.SequenceEqual(output, referenceOutput));
        }
    }
}
