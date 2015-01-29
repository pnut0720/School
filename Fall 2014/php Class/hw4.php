<html>
<body>
<?php

  echo "<h2>Ryan Peters</h2>";

  $myFile = "hw3.txt";
@ $fp = fopen($myFile, 'r');

  if(!fp)
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
  $readline6 = fgets($fp, 60);
  $readline7 = fgets($fp, 60);
  $readline8 = fgets($fp, 60);
  $readline9 = fgets($fp, 60);

  # Removing first 3 characters of the lines
  $data1 = substr($readline1, 3);
  $data2 = substr($readline2, 3);
  $data3 = substr($readline3, 3);
  $data4 = substr($readline4, 2);
  $data5 = substr($readline5, 3);
  $data6 = substr($readline6, 3);
  $data7 = substr($readline7, 3);
  $data8 = substr($readline8, 3);
  $data9 = substr($readline9, 3);

  $key1 = substr($readline1, 0, 3);
  $key2 = substr($readline2, 0, 3);
  $key3 = substr($readline3, 0, 3);
  $key4 = substr($readline4, 0, 3);
  $key5 = substr($readline5, 0, 3);
  $key6 = substr($readline6, 0, 3);
  $key7 = substr($readline7, 0, 3);
  $key8 = substr($readline8, 0, 3);
  $key9 = substr($readline9, 0, 3);


  $array = array($key1 => $data1,
  		 $key2 => $data2,
  		 $key3 => $data3,
  		 $key4 => $data4,
  		 $key5 => $data5,
  		 $key6 => $data6,
  		 $key7 => $data7,
  		 $key8 => $data8,
  		 $key9 => $data9
  		 );

  ksort($array);

  echo '<table>';

  echo '<th>Key</th>';
  echo '<th>Data</th>';

  echo '</table>';
?>


</body>
</html>
