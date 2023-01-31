<?php
//Para versiones menores a PHP 7

function conectaDB() 
{ 
  	$host = 'localhost'; //'148.222.7.8'
	$user = 'root';
	$pass = 'unach';

   if (!( $link = @mysql_connect($host,$user,$pass)) )
   {
      echo "Error al realizar la conexión a la base de datos.";
      exit();
   }

   if (!mysql_select_db("database_lsc",$link))
   { 
      echo "Error al seleccionar la base de datos."; 
      exit(); 
   }    
   return $link; 
} 
?>
