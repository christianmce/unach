Proceso votos
	Definir totalc1 como Entero;
	Definir totalc2 como Entero;
	Definir voto, casilla Como Entero;
	Definir cont como Entero;
	Definir cas1cand1, cas1cand2, cas2cand1, cas2cand2 como Entero;
	
	totalc1 <- 0;
	totalc2 <- 0;
	cas1cand1 <-0;
	cas1cand2 <-0;
	cas2cand1 <-0;
	cas2cand2 <-0;
	
	cont <-1;
	Mientras cont <=10 Hacer
		Escribir "¿Cuál es tu casilla? (1 o 2):";
		Leer casilla;
		Escribir "Ingresa tu voto por el Candidato de tu preferencia (1 o 2):";
		Leer voto;
		
		Segun casilla Hacer
			1:
				Si voto = 1 Entonces
					cas1cand1 = cas1cand1 + 1;					
				SiNo
					cas1cand2 = cas1cand2 + 1;
				FinSi
				
			2:
				Si voto = 1 Entonces
					cas2cand1 = cas2cand1 + 1;					
				SiNo
					cas2cand2 = cas2cand2 + 1;
				FinSi
				
			De Otro Modo:
				Escribir "No existe ese candidato";
		Fin Segun		
		
		cont <- cont + 1;
	Fin Mientras
	
	totalc1 = cas1cand1 + cas2cand1; //Total de votos del Candidato 1
	totalc2 = cas1cand2 + cas2cand2; //Total de votos del Candidato 2
	
	Si totalc1 > totalc2 Entonces
		Escribir "El CANDIDATO 1 fue electo por mayoría de votos, con un total de: ", totalc1, " votos";
		Escribir "Casilla 1:" cas1cand1;
		Escribir "Casilla 2:" cas2cand1;
	SiNo
		Escribir "El CANDIDATO 2 fue electo por mayoría de votos, con un total de: ", totalc2, " votos";
		Escribir "Casilla 1:" cas1cand2;
		Escribir "Casilla 2:" cas2cand2;
	Fin Si
	
FinProceso
