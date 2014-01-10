using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using DirectShowLib;
using AlaxInfoDirectShowSpy;

namespace FilterGraphHelperDialog
{
    class Program
    {
        [STAThread]
        static void Main(string[] args)
        {
            IFilterGraph2 graph = new FilterGraph() as IFilterGraph2;
            graph.RenderFile(@"E:\Media\GoPro 2010 Highlights - You in HD - 1920x1080.mp4", "");
            FilterGraphHelper helper = new FilterGraphHelper();
            helper.FilterGraph = graph;
            helper.DoPropertyFrameModal(0);
            Console.WriteLine(helper.Text);
        }
    }
}
