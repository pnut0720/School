<html>
<body>
<?php
  # My Name
  echo "<h2>Ryan Peters</h2>\n";

  #Open the file and reading it
  $myFile = "hw3.txt";
@ $fp = fopen($myFile, 'r');

  # Test against failure opening file and reading/writing to it
  if(!$fp)
  {
    echo "<p>I could not open $myFile right now.";
    exit;

  }

  # Read each line and assigning it to String variables
  $readline1 = fgets($fp, 60);
  $readline2 = fgets($fp, 60);
  $readline3 = fgets($fp, 60);
  $readline4 = fgets($fp, 60);
  $readline5 = fgets($fp, 60);

  # Removing first 3 characters of the lines
  $rdnew1 = substr($readline1, 3);
  $rdnew2 = substr($readline2, 3);
  $rdnew3 = substr($readline3, 3);
  $rdnew4 = substr($readline4, 3);
  $rdnew5 = substr($readline5, 3);

  # Re-printing the new formed files
  echo "New line 1: $rdnew1 <br>";
  echo "New line 2: $rdnew2 <br>";
  echo "New line 3: $rdnew3 <br>";
  echo "New line 4: $rdnew4 <br>";
  echo "New line 5: $rdnew5 <br>";


?>
</body>
</html>
