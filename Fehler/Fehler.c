/* Fehlerhaftes Programm*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout, NULL); // Eclipse Console fix
	int zahl = 0;
	printf("Bitte eine Zahl eingeben:  ");
	scanf("%i", &zahl);
	printf("Das Quadrat von %i ist: %i\n", zahl, zahl * zahl);
	return 0;
}
