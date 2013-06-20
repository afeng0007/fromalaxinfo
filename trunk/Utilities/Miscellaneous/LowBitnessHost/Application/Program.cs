using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Application
{
    class Program
    {
        [STAThread]
        static void Main(string[] args)
        {
            HostLib.Foo foo = new HostLib.Foo();
            foo.Bar();
        }
    }
}
