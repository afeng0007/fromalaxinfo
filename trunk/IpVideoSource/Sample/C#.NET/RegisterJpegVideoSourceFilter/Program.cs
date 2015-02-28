using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Diagnostics;
using AlaxInfoIpVideoSource;

namespace RegisterJpegVideoSourceFilter
{
    class Program
    {
        [STAThread]
        static void Main(string[] args)
        {
            JpegVideoSourceFilterRegistry registry = new JpegVideoSourceFilterRegistry();
            foreach (JpegVideoSourceFilterRegistryItem item in registry)
                Console.WriteLine(string.Format("{0} - {1}", item.InstanceName, item.FriendlyName));
            Console.WriteLine("-- Before Registration --");
            JpegVideoSourceFilter filter = new JpegVideoSourceFilter();
            // NOTE: Registration and Unregistration requires administrative access and elevated permissions
            filter.Location = "http://192.168.88.21/nph-mjpeg.cgi";
            filter.Width = 1280;
            filter.Height = 960;
            registry.Register("Test Camera", filter);
            Console.WriteLine("-- After Registration --");
            foreach (JpegVideoSourceFilterRegistryItem item in registry)
                Console.WriteLine(string.Format("{0} - {1}", item.InstanceName, item.FriendlyName));
            Console.WriteLine("-- Before Unregistration --");
            //registry["Test Camera"].Unregister();
            Console.WriteLine("-- After Unregistration --");
            foreach (JpegVideoSourceFilterRegistryItem item in registry)
                Console.WriteLine(string.Format("{0} - {1}", item.InstanceName, item.FriendlyName));
        }
    }
}
