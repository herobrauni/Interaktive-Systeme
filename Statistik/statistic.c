/*
 * statistic.c
 *
 *  Created on: 14 Nov 2017
 *      Author: brauni
 */


#include<stdio.h>

int main(void)
{
	setbuf(stdout, NULL);
	int x = 0;
	float f = 0;
	float sum = 0;
	printf("Wie viele Zahlen sollen eingegeben werden? ");
	scanf("%i", &x);
	for(int i = 1; i <= x; i++)
	{
		printf("Bitte geben sie die %i. Zahl ein: ", i);
		scanf("%f", &f);
		sum = f + sum;
	}
	printf("\nDie Summe aller Zahlen ist: %f\n", sum);
	printf("Der Mittelwert aller Zahlen ist: %f\n", sum/x);
	return 0;
}
