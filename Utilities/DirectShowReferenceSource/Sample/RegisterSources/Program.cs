using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Diagnostics;
using AlaxInfoDirectShowReferenceSource;

namespace RegisterSources
{
    class Program
    {
        static void UnregisterAll(VideoSourceFilterRegistry registry)
        {
            Debug.Assert(registry != null);
            foreach(SourceFilterRegistryItem item in registry)
                item.Unregister();
        }
        [STAThread]
        static void Main(string[] args)
        {
            VideoSourceFilterRegistry registry = new VideoSourceFilterRegistry();
            UnregisterAll(registry);
            VideoSourceFilter filter = new VideoSourceFilter();
            filter.Live = true;
            filter.SetMediaType(
                //1920, 1080,
                1920, -1080,
                //"{e436eb7e-524f-11ce-9f53-0020af0ba770}"); // RGB32
                "{773c9ac0-3274-11d0-B724-00aa006c1A01}"); // ARGB32
            filter.SetMediaTypeRate(25, 1); // 25 fps
            SourceFilterRegistryItem item = registry.Register("Test (Bottom to Top ARGB32)", filter);
            filter.SetMediaType(
                1920, 1080,
                //1920, -1080,
                //"{e436eb7e-524f-11ce-9f53-0020af0ba770}"); // RGB32
                "{773c9ac0-3274-11d0-B724-00aa006c1A01}"); // ARGB32
            item = registry.Register("Test (Top to Bottom ARGB32)", filter);
        }
    }
}
