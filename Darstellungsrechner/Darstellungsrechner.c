/*
 * Darstellungsrechner.c
 *
 *  Created on: 9 Nov 2017
 *      Author: brauni
 */

#include <stdio.h>
int main(void){
	setbuf(stdout, NULL);
	int Wahl = 4;
	int dez = 0;
//	printf("***Darstellungsrechner***\n\n1 = Dezimal nach Oktal\n2 = Dezimal nach Hexadezimal\n0 = Programm beenden\n\nIhre Auswahl: ");
//	scanf("%i", &Wahl);
	while(Wahl>2 || Wahl<0){
		printf("***Darstellungsrechner***\n\n1 = Dezimal nach Oktal\n2 = Dezimal nach Hexadezimal\n0 = Programm beenden\n\nIhre Auswahl: ");
		scanf("%i", &Wahl);
	}
	if(Wahl==0){
		return 0;
	}
	else if(Wahl==1){
		printf("\n--> Dezimal nach Oktal\n\n");

	}
	else if(Wahl==2){
		printf("\n--> Dezimal nach Hexadezimal\n\n");
	}
	printf("Geben Sie eine Dezimalzahl ein: ");
	scanf("%i", &dez);
	(Wahl<2) ?printf("\nDie Oktaldarstellung von %i ist %o", dez, dez) :printf("\nDie Hexadezimaldarstellung von %i ist %x", dez, dez);
	return 0;
}
