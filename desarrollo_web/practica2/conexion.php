<?php
function conectaDB() 
{ 
  	$host = 'localhost'; 
	$user = 'root';
	$pass = 'unach';
   $db="empresa";

   if (!( $link = mysqli_connect($host,$user,$pass,$db)) )
   {
      echo "Error al realizar la conexión a la base de datos.";
      exit();
   }

  /* if (!mysqli_select_db(,$link))
   { 
      echo "Error al seleccionar la base de datos."; 
      exit(); 
   } */   
   return $link; 
} 
?>