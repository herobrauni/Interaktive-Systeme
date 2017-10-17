/*
 * Fehler.c
 *
 *  Created on: 13.10.2017
 *      Author: brauni
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout, NULL); // Damit die Eclipse-Konsole funktioniert
	int zahl = 0;
	printf("Bitte eine Zahl eingeben: "); // Kein Strichpunkt
	scanf("%i", &zahl);
	printf("Das Quadrat von %i ist: %i\n", zahl, zahl * zahl); // Muss * statt + sein
	return 0;
}
