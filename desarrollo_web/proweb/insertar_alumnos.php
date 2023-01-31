<?php
$nom = $_POST['nom'];
$mat = $_POST['mat'];


include('conexion.php');
$con = conectaDB();
$sql ="insert into alumnos values('".$mat."','".$nom."')";

mysql_query($sql, $con);  

if(mysql_affected_rows()>0){
	echo "1";
}
else{
	echo "2";
}
 
?>
