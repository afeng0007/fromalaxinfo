using System;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.Linq;
using System.Text;
using System.Diagnostics;
using System.Threading;
using System.ServiceModel;
using System.ServiceModel.Description;
using System.ServiceModel.Web;

namespace Client
{
    [ServiceContract]
    public interface IService
    {
        [OperationContract]
        [WebGet(UriTemplate = "/Method?input={input}", BodyStyle = WebMessageBodyStyle.Bare, RequestFormat = WebMessageFormat.Xml, ResponseFormat = WebMessageFormat.Xml)]
        string Method(string input);
    }

    public partial class ServiceClient : 
        ClientBase<IService>, 
        IService
    {
        public ServiceClient()
        {
        }
        public ServiceClient(string endpointConfigurationName) :
            base(endpointConfigurationName)
        {
        }
        public ServiceClient(string endpointConfigurationName, string remoteAddress) :
            base(endpointConfigurationName, remoteAddress)
        {
        }
        public ServiceClient(string endpointConfigurationName, EndpointAddress remoteAddress) :
            base(endpointConfigurationName, remoteAddress)
        {
        }
        public ServiceClient(System.ServiceModel.Channels.Binding binding, EndpointAddress remoteAddress) :
            base(binding, remoteAddress)
        {
        }

        #region IService
        public string Method(string input)
        {
            return base.Channel.Method(input);
        }
        #endregion
    }

    class Program
    {
        static void NonRestMain()
        {
            //ServerServiceReference.ServiceClient client = new ServerServiceReference.ServiceClient();
            //for (int iteration = 0; ; iteration++)
            //{
            //    string input = char.ConvertFromUtf32('A' + (iteration / 10)) + (iteration % 10).ToString();
            //    string output = client.Method(input);
            //    Console.WriteLine(string.Format("Request sent/received, input {0}, output {1}", input, output));
            //    Thread.Sleep(2 * 1000);
            //}
        }
        static void RestMain()
        {
            ServiceClient client = new ServiceClient();
            for (int iteration = 0; ; iteration++)
            {
                string input = char.ConvertFromUtf32('A' + (iteration / 10)) + (iteration % 10).ToString();
                string output = client.Method(input);
                Console.WriteLine(string.Format("Request sent/received, input {0}, output {1}", input, output));
                Thread.Sleep(2 * 1000);
            }
        }
        static void Main(string[] args)
        {
#if DEBUG
            Thread.Sleep(1000);
#endif
            //NonRestMain();
            RestMain();
        }
    }
}
