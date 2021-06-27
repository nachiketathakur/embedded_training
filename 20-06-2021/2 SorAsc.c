#include <stdio.h>

/* Program to check if array is sorted or not 
*Using RECURSION
*/


int SortedOrNot(int arr[], int n)
{
	if (n==1)
		return 1;
	else
		return(arr[n-1] < arr[n-2]?0:SortedOrNot(arr, n-1));
}


/* Main Code*/

int main()
{
	int arr[1000], n, i;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	if ((SortedOrNot(arr, n)))
	{
			printf("Sorted\n");
	}
	else
	{
		printf("NOT Sorted\n");
	}
	return 0;
}
