<?php
$par1 = $_POST['idPro'];
$par2 = $_POST['Nombre'];
$par3 = $_POST['Precio'];
$par4 = $_POST['Ext'];

include('conexion.php');
$con = conectaDB();
$sql ="insert into td_productos values(".$par1.",'".$par2."',".$par3.",".$par4.")";

mysqli_query($con,$sql);  

header("location:ventas.php");
 
?>