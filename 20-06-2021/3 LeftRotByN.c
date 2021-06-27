#include <stdio.h>
int main()
{
	int n, arr[100], i, r, j, temp;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	printf("Enter the elements of the array: ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Enter rotation value: ");
	scanf("%d", &r);
	
	
	for(i=0; i<r; i++)
	{
		temp = arr[0]; 
		for(j=0; j<n; j++)
		{
			arr[j] = arr[j+1];
		}
		arr[n-1] = temp;
	}
	
	for(i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	return 0;
}

/*
LOGIC : say the input array is 1 2 3 4 5 
and the user wants to rotate to left by 2 times so this will be the process: 
for r=1: 2 3 4 5 1 
for r=2: 3 4 5 1 2 
*/
