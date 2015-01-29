<html>
<body>
<?php
  echo "<h2>Homework 2<br/></h2>";
  /* Display your name */
  $firstName = "Ryan Peters";
  echo "$firstName<br/>";
  echo "<br/>";
  echo "<b>Define and display two numeric variables.<br/></b>";
  /* Define and display two numeric variables */

  $numOne = 48;
  $numTwo = 120;
  echo "<br/>";

  echo "numOne equals: $numOne<br/>";
  echo "numTwo equals: $numTwo<br/><p>";

  echo "<b>Define and display two string variables.</b><p>";
  /* Define and display two string variables */

  $stringOne = "Hello";
  $stringTwo = "Today";

  echo "stringOne equals: $stringOne<br/>";
  echo "stringTwo equals: $stringTwo<br/><p>";

  echo "<b>Define and display a constant.</b><p>";
  /* Define and display a constant */

  define("NUM_ONE", 100);

  echo "NUM_ONE equals: " . NUM_ONE . "<p>";

  echo "<b>Display the use of two arithmetic operators.</b><p>";
  /* Display the use of two arithmetic operators */

  $total = $numOne + $numTwo;
  echo "Total of numOne & numTwo is using addition: " . $total;
  echo "<br/>";
  $total = $numOne * $numTwo;
  echo "The sum of numOne & numTwo is: " . $total . "<p>";

  echo "<b>Display the use of the string concatenation operator.</b><p>";
  /* Display the use of the string concatenation operator */

  $a = "Hello";
  $b = $a . " " .  "World!";
  echo $b . "<br/>";

  $a = "Hello ";
  $a .= "World!";
  echo $a . "<p>";

  echo "<b>Display the use of one combination assignment operator.</b><p>";
  /* Display the use of one combination assignment operator */

  $uno = 12;
  $dos = 46;

  $dos += 1;;

  echo "The variable dos plus one using the operator equals: " . $dos . "<p>";

  echo "<b>Display the use of the pre or post increment or decrement operator.</b><p>";
  /* Display the use of the pre or post increment or decrement operator */

  echo "dos equals without operator: " . $dos . "<br/>";

  $dos++;

  echo "with operator of dos++ equals now: " . $dos . "<p>";

  echo "<b>Display the use of two comparison operators.</b><p>";
  /* Display the use of two comparison operators */

  $answer = $uno < $dos . "<p>";

  echo "Is the value of the variable uno < (less than) the variable dos? ";

  echo $uno < $dos;
  echo "<br/>Note: 1 means the statement is true.<p>";

  echo "Is the value of the variable dos > (more than) the variable uno? ";
  echo $uno > $dos;

  echo "<br/>Note: 1 means it's true nothing means it's false";

  echo "<p><b>Display the use of one type-testing function.</b><p>";
  /* Display the use of one type-testing function */

  echo "By using the is_float function...";
  echo "is 24.565 a float? " . is_float(24.565) . "<br/>";
  echo "Again remember 1 means the statement is true";

?>
</body>
</html>
