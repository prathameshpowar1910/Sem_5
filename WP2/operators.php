<?php

$Student_139 = ["Aditya", "Bhagwant", "Pai"];
$Student_138 = ["Aditya", "Vilas", "Awhad"];

$union = $Student_139 + $Student_138;

print_r($union);
// returns first array since Key -> is present in the first array

$message1 = "\nBharat ";
$message2 = "Jodo ";
$message3 = "Yatra ";

$JointMessage = $message1 . $message2 . $message3;

echo $JointMessage;

//concatenates 3 strings

$bodmas = 5 * 3 / (6+9)  ;
// precedence of operators 
// Paranthesis , Multipiicatons , Division

echo "\n\nAnswer :  " . $bodmas . "\n"; 

?>

