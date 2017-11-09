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
	float f = 0;
	printf("***Quadratwurzelrechner***\n\nBitte Geben Sie eine Zahl ein: ");
	scanf("%f", &f);
	(f>0)?printf("\nDie Quadratwurzel aus %f ist %f", f, sqrt(f)):printf("Bitte gib eine positive Zahl ein.");
	return 0;
}
