/*Berechnungen*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout, NULL); // Console Fix
	int a = 10;
	int b = 20;
	int c = 30;
	int ergebnis = a*b*c;
	printf("Das Ergebnis von a*b*c ist: %i\n", ergebnis);
	return 0;
}
