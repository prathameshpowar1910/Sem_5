<?php


$Student_139 = array("Name" => "Aditya", "Surname" => "Pai");  
$Course_139 = array("Branch" => "IT", "Honors" => "AI");  


$union = $Student_139 + $Course_139;

print_r($union);
// returns first array since Key -> is present in the first array

$message1 = "\nBharat ";
$message2 = "Jodo ";
$message3 = "Yatra ";

$JointMessage = $message1 . $message2 . $message3;

echo $JointMessage;

echo "\n\n";

$s1 = "Fight Club";
$s3 = "Brad Pitt's ";
$s3 .= $s1;

echo $s3;

//concatenates 3 strings

$bodmas = 5 * 3 / (6+9)  ;
// precedence of operators 
// Paranthesis , Multipiicatons , Division

echo "\n\nAnswer :  " . $bodmas . "\n"; 

?>

