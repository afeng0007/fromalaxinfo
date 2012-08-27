var query = WScript.CreateObject("AlaxInfo.UaMobileTools.KyivstarUaBalanceQuery");

var log = "";
var messageBody = "";
var messageNeeded = false;

function Do(alias, number, password, threshold) {
    try {
        query.Initialize(number, password);
        log = log +
                (new Date).toLocaleString() + "\t" +
                alias + "\t" +
                query.Number + "\t" +
                query.Balance.toFixed(2) + //"\t" + 
                "\r\n";
        messageBody = messageBody + alias + ": " + query.Balance.toFixed(2) + "; ";
        messageNeeded |= query.Balance < threshold;
    } catch (error) {
        log = log +
            (new Date).toLocaleString() + "\t" +
            alias + "\t" +
            error.message + //"\t" + 
            "\r\n";
    }
}

function SendMessage() {
    message = WScript.CreateObject("AlaxInfo.EmailTools.Message");
    message.ServerHost = "smtp.gmail.com";
    message.Sender = "\"Balance Check\" <a@b.c>";
    message.ToRecipients = "38096xxxxxxx@sms.kyivstar.net";
    message.CcRecipients = "a@b.c";
    message.Subject = "Balance Check";
    message.Body = messageBody;
    message.TransportLayerSecurity = true;
    message.AuthMethods = "login";
    message.AuthName = "a@b.c";
    message.AuthPassword = "password";
    for (attempt = 0; attempt < 1 * 60 * 4; attempt++) { // 1 hour
        WScript.Echo("Trying to send email, attempt " + attempt.toString() + "...");
        try {
            message.Send();
            WScript.Echo("Sent");
            return true;
        }
        catch (error) {
            WScript.Echo(error.message);
        }
        WScript.Sleep(15 * 1000); // 15 seconds
    }
    return false;
}

Do("Roman", "+38096xxxxxxx", "password at my.kyvstar.ua", 10);
//Do("Tablet", ...

fileSystem = WScript.CreateObject("Scripting.FileSystemObject");
var textFilePath = "D:\\Projects\\Alax.Info\\Repository-Public\\Utilities\\UaMobileTools\\Script\\" + "Check.js.log";
textFile = fileSystem.OpenTextFile(textFilePath, 8, true); // ForAppending
textFile.Write(log);
textFile.Close();

if (messageNeeded)
    SendMessage();
