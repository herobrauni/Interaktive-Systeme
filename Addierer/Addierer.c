/*
 * Addierer.c
 * Aufgabe B02_A03
 *  Created on: 19 Oct 2017
 *      Author: brauni
 */


#include <stdio.h>

int main(void){
	setbuf(stdout, NULL);
	printf("5 + 3 ergibt: %i\n", 5+3);
	printf("10 * 10 ergibt: %i\n", 10*10);
	printf("10 / 3 ergibt als Int: %i\n", 10/3);  //Int ist eine Ganze Zahl => Nachkommastellen bzw. Rest entfällt
	// Mit der Ausgabe als float oder Double kommt das "richtige" Ergebnis heraus, beachte die Angabe von 10 als 10.0
	printf("10 / 3 ergibt als Float: %f\n", 10.0/3);
	printf("10 / 3 ergibt als Double: %lf\n", 10.0/3);
	return 0;
}
