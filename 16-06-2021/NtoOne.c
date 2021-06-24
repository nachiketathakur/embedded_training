/*Q1  Write a program to print N to 1 using recursion and also draw the diagram. */

#include <stdio.h>
void fun(int n)
{
	if (n==0)
	return;
 printf("%d\n", n);
 fun(n-1);
}
int main()
{
	int n;
	scanf("%d", &n);
	fun(n);
	return 0;
}
