/*
 ============================================================================
 Name        : Programa2.c
 Author      : Julio
 Version     :
 Copyright   : Free for all
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//pedir N numeros e imprimir el promedio
#include <stdio.h>
#include <stdlib.h>
#define CANTIDADNUMEROS 10

int main(void) {
	setbuf(stdout,NULL);
	int numero;
	int acumulador=0;
	int i;
	float resultadoPromedio;

	printf("ˇBienvenido!\n"); /* prints Todo manso */
	printf("Ingrese un numero:\n");
	scanf("%d",&numero);
	acumulador = acumulador+numero;
	for(i = 1 ; i < CANTIDADNUMEROS ; i++)
	{
	printf("Ingrese otro numero:\n");
	scanf("%d",&numero);
	acumulador = acumulador+numero;
	}

	resultadoPromedio = ((float)acumulador/CANTIDADNUMEROS);
	printf("El promedio de numeros es: %.2f.",resultadoPromedio);


	return EXIT_SUCCESS;
}
