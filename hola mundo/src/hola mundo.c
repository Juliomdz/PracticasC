/*
 ============================================================================
 Name        : hola.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define MENSAJE "QUE ONDA PERREKE"

int main(void) {
	setbuf(stdout, NULL);
	int i;
	i = 27;
	int j=27;
	float pi=3.14;
	char c = 'A';
	int k = 33;
	int edad;

	printf("el precio es %d pesos. el interés es %d y la edad de cristo es %d.\n",i,j,k);
	printf("El valor de pi es %f\n",pi);
	printf("La primer letra del alfabeto es %c.\n",c);
	printf("Ingrese su edad:");
	scanf("%d",&edad);
	printf("su edad es: %d\n",edad);

	printf(MENSAJE);
	return EXIT_SUCCESS;
}
