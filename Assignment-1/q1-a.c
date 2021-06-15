/* Q1-a This program shows effects of nested comments.*/ 

#include <stdio.h>
int main()
{

	printf("Hi\n"); 
	/*comment #1 begins  
	* /*  printf("welcome to embedded training\n");  */
	* a part of comment 
	comment ends  */ 
	printf("do your best\n");
	
	return 0;
}

/* here line number 10 will throw an error. The compiler sees "/*" as starting of comment and "[asterik]/" as end of comment */ 
/* nested comment is not a good practice. To solve such errors, we can use editors like VIM which follow color code for different part of the program. Also we can use single line comments and multi line comments wherever required instead of nested comments 
SOURCE : https://www.dummies.com/programming/c/watching-out-for-nested-comments-in-c/ */
