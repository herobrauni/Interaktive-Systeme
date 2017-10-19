/*
 * Benzinverbrauch.c
 * Aufgabe B02_A04
 *  Created on: 19 Oct 2017
 *      Author: brauni
 */

#include <stdio.h>

int main(void){
	setbuf(stdout, NULL);
	// Anlegen der Variablen
	float verbrauch_100 = 0;
	float strecke = 0;
	float verbrauch_strecke = 0;
	// Eingabe der Variablen durch Nutzer
	printf("Bitte den Verbrauch in Litern für 100km angeben: ");
	scanf("%f", &verbrauch_100);
	printf("Bitte die gefahrenen km angeben: ");
	scanf("%f", &strecke);
	// Berechnen von Verbrauch pro Strecke
	verbrauch_strecke = verbrauch_100/100 * strecke;
	// Ausgabe Verbrauch/Strecke
	printf("Auf %fkm benötigt Ihr Auto: %f", strecke, verbrauch_strecke);
	return 0;
}
