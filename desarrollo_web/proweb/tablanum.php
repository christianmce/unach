<html>
<body>
	
	<form action="index.php" method="POST">
		Numero: <input type="text" name="num" size="2">
		<input type="submit" value="Generar">
	</form>
	<br>

	<table border="0">
	<?php
	if(isset($_POST['num'])==true){
		$cont=1;
		$num = $_POST['num'];
		while($cont<=10){
		echo "<tr>";
			echo "<td>".$num."</td>";
			echo "<td>*</td>";
			echo "<td>".$cont."</td>";
			echo "<td>=</td>";
			echo "<td>".($num*$cont)."</td>";
		echo "</tr>";
		$cont=$cont+1;
		}
	}
	?>
	</table>

</body>
</html>