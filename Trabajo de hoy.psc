// * 
// S = 2! /1 + 3! /1^2 – 5! / 2^3 – 7! / 3^4 + 11! / 5^5 + 13! /8^6 – 17! / 13^7 - …..  
// *
// Loja 20/1/2020
// Algoritmo realizado por : Jean Agreda
// Patricio Paredes
// Josue Sauca
// Jhonatan Sefla
// Primer Ciclo de Computaci�n "A" 
Funcion verificarprimo()
	Definir esPrimo Como Logico
	Definir primo,j Como Real
	Mientras j<primo Y esPrimo==true Hacer
		Si primo MOD j==0 Entonces
			esPrimo <- false
		FinSi
		j <- j+1
	FinMientras
FinFuncion

Funcion calcularfactorialnumeroprimo()
	Definir primo Como Entero
	Definir fact Como Real
	Para k<-1 Hasta primo Hacer
		fact <- fact*k
	FinPara
FinFuncion

Funcion calcularpotenciafibo()
	Definir i,pot,fibo Como Entero
	Para m<-1 Hasta i Hacer
		pot <- pot*fibo
	FinPara
FinFuncion

Funcion generarsiguientetermino()
	Definir primo,fibo,fibo_a,fibo_b,contSigno,signoTermino Como Entero
	primo <- primo+1
	fibo <- fibo_a+fibo_b
	fibo_a <- fibo_b
	fibo_b <- fibo
	contSigno <- contSigno+1
	Si (contSigno>2) Entonces
		signoTermino <- signoTermino*(-1)
		contSigno <- 1
	FinSi
FinFuncion

Algoritmo PRINCIPAL_DE_LA_SERIE
	Definir Terminos,i,contSigno,signoTerminos Como Entero
	Definir fibo,fibo_a,fibo_b Como Entero
	Definir j,primo Como Entero
	Definir suma Como Real
	Definir esPrimo Como Logico
	Escribir 'Ingrese Nro de Terminos de la Serie '
	Leer Terminos
	primo <- 2
	fibo <- 1
	fibo_a <- 0
	fibo_b <- 1
	suma <- 0.0
	contSigno <- 1
	signoTermino <- 1
	i <- 1
	Escribir ('S = ')
	Mientras (i<=Terminos) Hacer
		// * Verificar el numero primo *//
		esPrimo <- true
		j <- 2
		esPrimo = verificarprimo( primo, j, esPrimo);
		Si esPrimo==true Entonces
			Si signoTermino>0 Entonces
				Escribir ' + '
			SiNo
				Escribir ' - '
			FinSi
			Escribir primo,' !',' /',fibo,' ^',i
			// * Fin Para Presentacion de la serie */
			// * Calcular el factorial del numero primo */
			pot <- 1
			pot= calcularpotenciafibo,(i, pot, fibo)
			// * Fin Calcular la potencia del fibonacci */
			// * Calcular la sumatoria */
			suma <- suma+((fact/pot)*signoTermino)
			// * Generar siguiente Termino */
			primo <- primo+1
			fibo <- fibo_a+fibo_b
			fibo_a <- fibo_b
			fibo_b <- fibo
			contSigno <- contSigno+1
			Si contSigno>2 Entonces
				signoTermino <- signoTermino*(-1)
				contSigno <- 1
			FinSi
			i <- i+1
		SiNo
			// Agregar para generar el siguiente primo
			primo <- primo+1
		FinSi
	FinMientras
	Escribir 'S = ',suma
FinAlgoritmo
