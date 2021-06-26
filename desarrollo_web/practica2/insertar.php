<?php
$ids = $_POST['Ids'];
$noms = $_POST['Nomserv'];
$precios = $_POST['Precio'];

include('conexion.php');
$con = conectaDB();
$sql ="insert into servicios values(".$ids.",'".$noms."',".$precios.")";

mysqli_query($con,$sql);  

if(mysqli_affected_rows($con)>0){
	echo "1";
}
else{
	echo "2";  
} 
?>