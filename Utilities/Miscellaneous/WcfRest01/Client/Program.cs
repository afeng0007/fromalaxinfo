using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Diagnostics;
using System.Threading;
using System.ServiceModel;
using System.ServiceModel.Description;

namespace Client
{
    class Program
    {
        static void Main(string[] args)
        {
            Thread.Sleep(1000);
            ServerServiceReference.ServiceClient client = new ServerServiceReference.ServiceClient();
            for (int iteration = 0; ; iteration++)
            {
                string input = char.ConvertFromUtf32('A' + (iteration / 10)) + (iteration % 10).ToString();
                string output = client.Method(input);
                Console.WriteLine(string.Format("Request sent/received, input {0}, output {1}", input, output));
                Thread.Sleep(2 * 1000);
            }
        }
    }
}
