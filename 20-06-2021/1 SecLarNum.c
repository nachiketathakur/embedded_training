#include <stdio.h>

/* function to sort the array in ascending
* and print second largest number from array 
*/

void SecLarNum(int arr[], int n)
{
	int i,j, temp; 
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; ++j)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i]; 
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
printf("Second largest number is array is : %d\n", arr[n-2]);
}

/* Main code begins. Here we take two inputs : 1. Size of array
* Numbers in array, then we pass it to the function
*/

int main()
{
	int arr[10000],n, i;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	printf("\nEnter the elements of the array of size %d: ", n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	SecLarNum(arr,n);
	return 0;
}
