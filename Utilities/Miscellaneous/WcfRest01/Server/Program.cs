using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Diagnostics;
using System.Threading;
using System.ServiceModel;
using System.ServiceModel.Description;

namespace Server
{
    [ServiceContract]
    public interface IService
    {
        [OperationContract]
        string Method(string input);
    }

    [ServiceBehavior(InstanceContextMode = InstanceContextMode.Single)]
    public class Service :
        IService
    {
        #region IService
        public string Method(string input)
        {
            string output = input.Substring(1) + input[0];
            Console.WriteLine(string.Format("Request received, input {0}, output {1}", input, output));
            return output;
        }
        #endregion
    }

    class Program
    {
        private ServiceHost serviceHost = null;

        private void InternalMain(string[] args)
        {
            Debug.Assert(serviceHost == null);
            Console.WriteLine("Starting...");
            serviceHost = new ServiceHost(new Service());
            Console.WriteLine("Started.");
            try
            {
                serviceHost.Open();
                Console.WriteLine("Running, press any key to close...");
                Console.ReadKey();
                Console.WriteLine();
            }
            catch (Exception exception)
            {
                serviceHost.Close();
                serviceHost = null;
                throw exception;
            }
            Console.WriteLine("Stopping...");
            serviceHost.Close();
            Console.WriteLine("Stopped.");
        }
        static void Main(string[] args)
        {
            Program instance = new Program();
            instance.InternalMain(args);
        }
    }
}
