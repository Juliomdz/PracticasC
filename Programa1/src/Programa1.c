/*
 ============================================================================
 Name        : Programa1.c
 Author      : Julio
 Version     :
 Copyright   : Free for all
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {
	setbuf(stdout,NULL);
	int numero1;
	int numero2;
	int resultado;

	printf("ˇBienvenido!\n"); /* prints Todo manso */
	printf("Ingrese un numero:\n");
	scanf("%d",&numero1);
	printf("Ingrese otro numero:\n");
	scanf("%d",&numero2);
	resultado = numero1 + numero2;
	printf("La suma de ambos numeros es %d.",resultado);


	return EXIT_SUCCESS;
}
