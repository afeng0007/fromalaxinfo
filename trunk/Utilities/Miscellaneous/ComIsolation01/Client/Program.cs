using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Client
{
    class Program
    {
        [STAThread]
        static void Main(string[] args)
        {
            ServerLib.TestObject testObject = new ServerLib.TestObject();
            string path;
            int bitness;
            testObject.TestMethod(out path, out bitness);
            Console.WriteLine(string.Format("{0}, {1}", path, bitness));
        }
    }
}
