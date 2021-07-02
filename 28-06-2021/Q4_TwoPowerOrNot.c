/* 4. Write a program to find the given number is 2 power or not. */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num;
	system("clear"); 
	scanf("%d", &num);
	if((num != 1) && (num & (num - 1))) //this checks if a num is not a power of 2
	{
		printf("NOT a power of 2\n");
	}
	else
	{
		printf("A power of 2\n");
	}
}

/* FACT: 2^n - 1 is all ONES(11...b) in Binary
*  So, we can check if a number NOT a power of 2 by 
* the following way : (num&(num-1))
*/
