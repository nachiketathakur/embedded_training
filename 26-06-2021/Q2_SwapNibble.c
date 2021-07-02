/*Q2. Write a program to Swap the nibble in a byte without using bitwise operator. */

#include <stdio.h>
#include <stdlib.h>

/* Declaring struct and definig nunber of bits to each nibble*/

typedef struct
{
	unsigned char half_byte_0 : 4 ;
	unsigned char half_byte_1 : 4 ;
}nibble;


typedef union
{
	unsigned char i;
	nibble n;
}swap;


int main()
{
	swap x,y;
	x.i = 0x19;
	
	y.n.half_byte_0 = x.n.half_byte_1;
	y.n.half_byte_1 = x.n.half_byte_0;
	system("clear");
	printf("Before Swapping: 0x%x\n", x.i);
	printf("After Swapping:  0x%x\n",y.i);
	return 0;
}

