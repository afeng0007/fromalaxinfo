using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using DirectShowLib;
using AlaxInfoIpVideoSource;

namespace PlayJpegLocationSharp
{
    class Program
    {
        [STAThread]
        static void Main(string[] args)
        {
            FilterGraph filterGraph = new FilterGraph();
            IJpegVideoSourceFilter sourceFilter = Activator.CreateInstance(Type.GetTypeFromCLSID(new Guid("{A8DA2ECB-DEF6-414D-8CE2-E651640DBA4F}"))) as IJpegVideoSourceFilter;
            IBaseFilter sourceBaseFilter = sourceFilter as IBaseFilter;
            (filterGraph as IFilterGraph2).AddFilter(sourceBaseFilter, "Source");
            //sourceFilter.Location = @"http://p.viewnetcam.com:60001/nphMotionJpeg?Resolution=640x480&Quality=Standard";
            //sourceFilter.Width = 640;
            //sourceFilter.Height = 480;
            sourceFilter.Location = @"http://192.168.88.52/nph-jpeg.cgi";
            sourceFilter.Width = 1280;
            sourceFilter.Height = 960;
            IPin pin = DsFindPin.ByDirection(sourceBaseFilter, PinDirection.Output, 0);
            (filterGraph as IFilterGraph2).Render(pin);
            (filterGraph as IMediaControl).Run();
            EventCode eventCode;
            (filterGraph as IMediaEvent).WaitForCompletion(-1, out eventCode);
        }
    }
}
