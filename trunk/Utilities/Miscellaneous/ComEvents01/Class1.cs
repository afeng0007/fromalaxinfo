using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Runtime.InteropServices;

// NOTE: http://stackoverflow.com/questions/36213087/why-are-com-event-handlers-always-null

namespace ComEvents01
{
    [ComVisible(true)]
    [Guid("B7B03FEA-9E88-4260-99E9-EFEE790EAC7C")]
    [InterfaceType(ComInterfaceType.InterfaceIsIDispatch)]
    public interface IParserStateEvents
    {
        void OnReady();
    }

    [ComVisible(true)]
    public interface IParserState
    {
        void Initialize();
    }

    [ComVisible(true)]
    [Guid("3BD05E26-755D-4202-ADEF-D20BEDE4634B")]
    [ProgId("ComEvents01.ParserState")]
    [ClassInterface(ClassInterfaceType.AutoDual)]
    [ComDefaultInterface(typeof(IParserState))]
    [ComSourceInterfaces(typeof(IParserStateEvents))]
    public class ParserState : IParserState
    {
        public event Action OnReady;

        public ParserState()
        {
        }
        public void Initialize()
        {
            if (OnReady != null)
                OnReady();
        }
    }
}
