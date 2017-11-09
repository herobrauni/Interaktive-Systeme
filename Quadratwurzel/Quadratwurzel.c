/*
 * Quadratwurzel.c
 *
 *  Created on: 9 Nov 2017
 *      Author: brauni
 */

#include <stdio.h>
#include <math.h>
int main(void){
	setbuf(stdout, NULL);
	float zahl = 0;
	printf("***Quadratwurzelrechner***\n\nBitte Geben Sie eine Zahl ein: ");
	scanf("%f", &zahl);
	if (zahl<0){
		printf("Bitte gib eine positive Zahl ein.");
		return 1;
	}
	printf("\nDie Quadratwurzel aus %f ist %f", zahl, sqrt(zahl)); //sqrt funktion für Quadratwurzel ziehen aus math.h
	return 0;
}
