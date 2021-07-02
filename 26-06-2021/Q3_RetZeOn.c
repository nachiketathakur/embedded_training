/* 3. Write a program as a Macro will take two arguments. It should return the position 1 or 0. */

#include <stdio.h>
#include <stdlib.h>
#define 	ZeroOrOne(n,nth)		(!(n & (1<<nth)))? 0 : 1 

int main()
{
	int n,nth;
	system("clear");
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("Enter nth Bit you want the status of: ");
	scanf("%d",&nth);
	printf("Bit #%d is : %d\n",nth,ZeroOrOne(n, nth));
	return 0;
}
