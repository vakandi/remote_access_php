<?php
if(isset($_GET['message'])) {
   //$message = $_GET['message'];
	$message = str_replace(' ', '_', $_GET['message']);
	$output = shell_exec("script/message.sh $message");
    echo $output;
}
?>

