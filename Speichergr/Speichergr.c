/*
 * Speichergr.c
 * Gibt die verschiedenen Speichergrößen von Datentypen aus
 *  Created on: 19 Oct 2017
 *      Author: brauni
 */


#include <stdio.h>

int main(void){
	setbuf(stdout, NULL);
	// Definiere verschiedene Variablen als Größen ihrer Datentypen in Bytes
	short char_size =  sizeof(char);
	short short_size = sizeof(short);
	short int_size = sizeof(int);
	short long_size = sizeof(long);
	short unsigned_char_size = sizeof(unsigned char);
	short unsigned_short_size = sizeof(unsigned short);
	short unsigned_int_size = sizeof(unsigned int);
	short unsigned_long_size = sizeof(unsigned long);
	short float_size = sizeof(float);
	short double_size = sizeof(double);

	printf("Größen der Datentypen in Bytes:\nChar: %i\nShort: %i\nInt: %i\nLong: %i\nUnsigned Char: %i\nUnsigned Short: %i\nUnsigned Int: %i\nUnsigned Long: %i\nFloat: %i\nDouble: %i\n"
			, char_size, short_size, int_size, long_size, unsigned_char_size, unsigned_short_size, unsigned_int_size, unsigned_long_size, float_size, double_size);

	return 0;
}
