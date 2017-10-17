/*
 * Datentypen.c
 *
 *  Created on: 17 Oct 2017
 *      Author: brauni
 */


#include <stdio.h>
int main(void) {
	setbuf(stdout, NULL); // Damit die Eclipse-Konsole funktioniert
	char buchstabe = 'x';
	unsigned short kurze_zahl = 100;
	printf("Ausgabe des Buchstaben 'x' in verschiedenen Formaten: \n");
	printf("%c\n", buchstabe);
	printf("%d\n", buchstabe);
	printf("Ausgabe der Zahl 100 in verschiedenen Formaten: \n");
	printf("dezimal: ");
	printf("%d\n", kurze_zahl);
	printf("hexadezimal: ");
	printf("%x\n", kurze_zahl);
	printf("oktal: ");
	printf("%o\n", kurze_zahl);
	kurze_zahl = -100;
	printf("Ausgabe von - 100: ");
	printf("%d\n", kurze_zahl);
	return 0;
}
