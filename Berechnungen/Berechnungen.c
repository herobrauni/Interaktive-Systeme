/*
 * Berechnungen.c
 *
 *  Created on: 13.10.2017
 *      Author: brauni
 */

#include<stdio.h>


int main(void)
{
	setbuf(stdout, NULL); //Console Fix
	// Int Variablen erstellen und definieren
	int a = 10;
	int b = 20;
	int c = 30;
	int ergebnis = a*b*c;
	printf("a*b*c ergibt: %i\n", ergebnis);
	return 0;
}
