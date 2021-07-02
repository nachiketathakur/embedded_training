#include <stdio.h>
#include <stdlib.h>
int main()
{
	int val[]={20,20,40,40,13,13,11,88,88,98,99,11,11};
	int xor_res, i; 
	xor_res=(val[0] ^ val[1]);
	system("clear");
	printf("First: %d\n", xor_res);
	for(i=2; i<13; i++)
	{
		xor_res = (xor_res ^ val[i]);
		printf("In for Loop: %d\n", xor_res);
	}
	printf("Final: %d\n", xor_res);
}
