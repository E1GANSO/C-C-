/*
	Ejercicio 11: Dada una nota de un examen mediante un código escribir 
	el literal que le corresponde a la nota.

	A - Excelente ==> 5
	B - Notable   ==> 4<=5
	C - Aprobado  ==> 3<=4
	D y F - Reprobado ==> =/3
	
	
	Ejercicio 12: Seleccionar un tipo de vehículo e indicar el peaje a pagar según un valor numérico
	1 - turismo, peaje = $500.
	2 - autobus, peaje = $3000.
	3 - motocicleta, peaje = $300.
	caso contrario - Vehiculo no autorizado.
*/


//RESPUES DEL EJERCICIO 11:

#include<stdio.h>
#include<conio.h>

void Promedio(int a, int b, int c){
	float resul = (float)((a+b+c)/3);
	printf("PROMEDIO: %.2f", resul); printf("\n");
}

main(){
	int i=0, x, a, b, c;
	printf("INGRESE EL NUMERO DE ESTUDIANTES: ");
	scanf("%i", &x); printf("\n");
	do{
		printf("INGRESE LA NOTA 1: ");
		scanf("%i", &a);
		printf("INGRESE LA NOTA 2: ");
		scanf("%i", &b);
		printf("INGRESE LA NOTA 3: ");
		scanf("%i", &c);
		Promedio(a,b,c);
		i++;
	}while(x!=i);
	
	getch();
}

