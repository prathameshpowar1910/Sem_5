<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<style>

ul{

list-style-type: none;
margin: 0;
padding: 0;
display: flex;
flex-direction:row;

}

</style>

<body>

    <div class="navbar">

        <ul>
            <li> <a href="index.php"> String Functions</a> </li>
        </ul>
        <ul>
            <li> <a href="index.php"> Math Functions  </a> </li>
        </ul>
        <ul>
            <li> <a href="index.php"> Date and Time </a> </li>
        </ul>
    </div>
            
    <br>

    <?php  
        // 2 character salt  
        if (CRYPT_STD_DES == 1){  
        echo "Standard DES: ".crypt('javatpoint','jt')."\n<br>";   
        }  
        else{  
        echo "Standard DES not supported.\n<br>";  
        }  
    
    
    
        $str = "+91 83559";  
        echo "\n\nYour string is: ".$str ."<br>";  
        echo "\n\nBy using trim() function :".trim($str,"+91 ");  

        
    ?>  


</body>
</html>
