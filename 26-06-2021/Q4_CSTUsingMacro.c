/* 4. Write a program to CLEAR, SET, TOGGLE with bitwise operator using Macro. */
//https://www.codementor.io/@hbendali/c-c-macro-bit-operations-ztrat0et6
//https://gcc.gnu.org/onlinedocs/cpp/Macro-Arguments.html
//https://aticleworld.com/c-program-to-swap-two-nibbles-in-a-byte/

#include <stdio.h>

/* Macro definitions */
#define CLEAR(in, nbit)	(in &= ~(1<<nbit) )
#define SET(in, nbit)			(in |= (1<<nbit))
#define TOGGLE(in, nbit)  (in ^= (1<<nbit))			

int main()
{
	unsigned char in = 0x50; 
	unsigned char nbit = 3;
	
	printf("Hex value is : %x\n", in);
	
	//set 2nd bit
	SET(in, nbit);
	printf("After setting bit %d : %x\n", nbit, in);
	
	//clear 2nd bit
	CLEAR(in, nbit);
	printf("After clearing : 	%x\n",in);
	
	//toggle 
	TOGGLE(in, nbit);
	printf("After toggling : 	%x\n",in);
}
