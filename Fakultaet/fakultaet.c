/*
 * fakultaet.c
 *
 *  Created on: 14 Nov 2017
 *      Author: brauni
 */


#include<stdio.h>

int main(void)
{
	setbuf(stdout, NULL);
	int a = 0;
	int b = 0;
	printf("Geben Sie Zahl a ein: ");
	scanf("%i", &a);
	printf("Geben Sie Zahl b ein: ");
	scanf("%i", &b);
	long long x = a;
	printf("%i ", a);
	for(int i = 0, n = a-b; i<n; i++)
	{
		x = x*(a-1);
		a--;
		printf("* %i ", a);
	}
	printf("= %lld\n", x);
}
