/* 3 Write a program with Macro to find even or odd using bitwise operator. */

#include <stdio.h>
#include <stdlib.h>
#define XOR(val) (val^=1)


int main()
{
	system("clear");
	int n, new; //new is the temp var where we store XOR result. 
	scanf("%d", &n);
	new=n;
	
	//XOR the input
	XOR(new);
	
	//compare temp with orginal input
	if(new == n+1)
	{
		printf("EVEN\n");
	}
	else
	{
		printf("ODD\n");
	}
	return 0;
}

/* When a number is XORed with 1, if it increases by 1, it's EVEN, else it's ODD */
