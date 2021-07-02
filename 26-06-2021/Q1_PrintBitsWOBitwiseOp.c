/* 1. Write a program to print bits in the character byte without using bitwise operator. (Hint: Use Union & Bit fields) */

#include <stdio.h>

/* This problem can be solved using Unions and BitFields
* First we declare the structure
* each bit value in the structure
* then manipulate the bits
*/

/*https://stackoverflow.com/questions/20005349/define-union-that-can-access-bits-nibbles-bytes*/
/*https://stackoverflow.com/questions/47981/how-do-you-set-clear-and-toggle-a-single-bit*/

/* Union definition*/
typedef struct
{
	unsigned char bit_0 :	1;
	unsigned char bit_1 :	1;
    unsigned char bit_2 :	1;
	unsigned char bit_3 :	1;
	unsigned char bit_4 :	1;
	unsigned char bit_5 :	1;
	unsigned char bit_6 :	1;
	unsigned char bit_7 :	1;
}bit_feild_t;

typedef union
{
	int i;
	bit_feild_t n;
}bit_t;

int main()
{
	bit_t x,y;
	x.i = 0x99;
	printf("bit0 = %d\n",(y.n.bit_0 = x.n.bit_0));	
	printf("bit1 = %d\n",(y.n.bit_1 = x.n.bit_1));
	printf("bit2 = %d\n",(y.n.bit_2 = x.n.bit_2));
	printf("bit3 = %d\n",(y.n.bit_3 = x.n.bit_3));
	printf("bit4 = %d\n",(y.n.bit_4 = x.n.bit_4));
	printf("bit5 = %d\n",(y.n.bit_5 = x.n.bit_5));
	printf("bit6 = %d\n",(y.n.bit_6 = x.n.bit_6));
	printf("bit7 = %d\n",(y.n.bit_7 = x.n.bit_7));
	return 0;
}
