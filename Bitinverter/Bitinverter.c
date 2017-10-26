/*
 * Bitinverter.c
 *
 *  Created on: 26 Oct 2017
 *      Author: brauni
 */

#include<stdio.h>


int main(void)
{
	setbuf(stdout, NULL); //Console Fix
	int a;
	unsigned int n;
	int ergebnis_positiv;
	int ergebnis_negativ;
	printf("Bitte geben sie eine ganze Zahl \"a\" ein: ");
	scanf("%i", &a);
	printf("Bitte geben sie eine natürliche Zahl \"n\" ein: ");
	scanf("%i", &n);
	ergebnis_positiv= a <<n;
	ergebnis_negativ= a >>n;
	printf("a*2^n = %i*2^%i = %i\n", a, n, ergebnis_positiv );
	printf("a*2^-n = %i*2^-%i = %i", a, n, ergebnis_negativ);
	return 0;
}
