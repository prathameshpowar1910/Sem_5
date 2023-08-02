<?php

$Student_139 = ["Aditya", "Bhagwant", "Pai"];
$Student_138 = ["Aditya", "Vilas", "Awhad"];

$union = $Student_139 + $Student_138;

print_r($union);
// returns first array since Key -> is present in the first array

$message1 = "Bharat ";
$message2 = "Jodo ";
$message3 = "Yatra ";

$JointMessage = $message1 . $message2 . $message3;

echo $JointMessage;

//concatenates 3 strings

$my_age = 20;
$my_fathers_age = 45;
$my_grtgrandfathersage = $my_age += 2 * $my_fathers_age; 
// Multiplication has higher precedence than addition  and assignment has the lowest 

echo "\n\nResult 4: " . $my_grtgrandfathersage . "\n"; 

?>

