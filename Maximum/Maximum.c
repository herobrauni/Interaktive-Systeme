/*
 * Maximum.c
 *
 *  Created on: 12.10.2017
 *      Author: brauni
 */

#include <stdio.h>
int main(void){
	setbuf(stdout, NULL);
	int a = 0;
	int b = 0;
	int c = 0;
	printf("Bitte erste Zahl eingeben: ");
	scanf("%i", &a);
	printf("Bitte zweite Zahl eingeben: ");
	scanf("%i", &b);
	printf("Bitte dritte Zahl eingeben: ");
	scanf("%i", &c);
	if(a>b){
		if(a>c){
			printf("Das Maximum ist %i\n", a);
		}
		else{
			printf("Das Maximum ist %i\n", c);
		}
	}
	else{
		if(b>c){
			printf("Das Maximum ist %i\n", b);
		}
		else{
			printf("Das Maximum ist %i\n", c);
		}
	}
}
