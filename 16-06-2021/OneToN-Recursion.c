/*Q2  Write a program to print 1 to n using recursion and also draw the diagram. */

#include <stdio.h>
void fun(int n)
{
	if (n==0)
	return ;
	fun(n-1);
	printf("%d\n", n);
}
int main()
{
	int n;
	scanf("%d", &n);
	fun(n);
	return 0;
}
