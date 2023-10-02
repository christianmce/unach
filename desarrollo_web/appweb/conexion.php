<?php
function conectaDB() 
{ 
  	$host = 'localhost'; 
	$user = 'id21339672_useradmin1';
	$pass = 'Unach23..//';

   if (!( $link = @mysqli_connect($host,$user,$pass)) )
   {
      echo "Error al realizar la conexión a la base de datos.";
      exit();
   }

   if (!mysqli_select_db($link,"id21339672_miempresa"))
   { 
      echo "Error al seleccionar la base de datos."; 
      exit(); 
   }    
   return $link; 
} 
?>
