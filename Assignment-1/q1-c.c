#include <stdio.h>
int main()
{
	char ch1, ch2, ch3;
	ch1 = 65;
	ch2 = 'b';
	ch3 = '3';

	printf("ch1 = %c\n", ch1);
	printf("ch2 = %c\n", ch2);
	printf("ch3 = %c\n", ch3);
	printf("ch1 = %d\n", ch1);
	printf("ch2 = %d\n", ch2);
	printf("ch3 = %d\n", ch3);

	return 0;
}
/* OUTPUT and explanation: 
A - prints ASCII value associated with alphabet
b - 'b' is the standard way to declare a character
3 - '3' will be seen as a character as we have used "%c" 
65 - since we used "%d", the integer will be returned 
98 - the ascii value of alphabet 'b' will be printed
51 - the ascii value of '3' will be printed
*/
