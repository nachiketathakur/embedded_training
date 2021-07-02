/* 2. Write a program to count set bits. */
/*
What we can do is convert decimal to binary and count number of 1s in binary. 
*/
	#include<stdio.h>    
    #include<stdlib.h>  
    int main(){  
    int a[10],n,i, count=0;
    system ("clear");  
    printf("Enter the number: ");    
    scanf("%d",&n);    
    for(i=0;n>0;i++)    
    {    
    a[i]=n%2;    
    n=n/2;    
    }    
    printf("\nNumber of 1s is=");    
    for(i=i-1;i>=0;i--)    
    {  
    	if (a[i] == 1)  
    	{
    		count++;
    	}
    //printf("%d",a[i]);    
    }    
    printf("%d\n", count);
    return 0;  
	}  
