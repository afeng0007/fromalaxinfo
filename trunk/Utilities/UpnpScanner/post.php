<?
    // NOTE: Expected POST values: r, s, b (base64 encoded utf8)

	////////////////////////////////////////////////////////
	// FIX: Global Variables

	if(isset($_GET["r"]))
		$r = $_GET["r"];
	else if(isset($_POST["r"]))
		$r = $_POST["r"];
	else
		$r = "roman@alax.info";

	if(isset($_GET["s"]))
		$s = $_GET["s"];
	else if(isset($_POST["s"]))
		$s = $_POST["s"];
	else if(isset($_POST["subj"]))
		$s = $_POST["subj"];

	if(isset($_GET["b"]))
		$b = $_GET["b"];
	else if(isset($_POST["b"]))
		$b = $_POST["b"];
	else if(isset($_POST["body"]))
		$b = $_POST["body"];

	//
	////////////////////////////////////////////////////////

    $from = "Alax.Info Web Automation";
    $fromemail = "roman@alax.info";
    $recipient = "$r";
    $subject = "Alax.Info Web: $s";
    $headers = "MIME-Version: 1.0\n";
    $headers .= "From: $from <$fromemail>\n";
    $headers .= "Content-Type: multipart/mixed; boundary=\"----------separator\"\n";
    $message = "------------separator\n";
    $message .= "Content-Type: text/plain; charset=\"utf-8\"\n";
    $message .= "Content-Transfer-Encoding: base64\n";
    $message .= "Content-Disposition: inline\n";
    $message .= "\n";
    $body = $b;
    while(true)
    {
      $length = strlen($body);
      if($length <= 0)
        break;
      $linelength = ($length > 72) ? 72 : $length;
      $message .= substr($body, 0, $linelength);
      $message .= "\n";
      $body = substr($body, $linelength, $length - $linelength);
    }
    $message .= "\n";
    $message .= "------------separator--\n";
    mail($recipient, $subject, $message, $headers);
?>
