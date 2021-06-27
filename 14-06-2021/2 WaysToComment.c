/* this program shows two ways to comment in C
 * this is called multiple line comment
 * compiler assumes everything between /(*) and 
 * (*)/ is a comment
 */

//this is a single line comment

/* this also a single line comment */ 

//to comment this whole code, we use multiple lines of comment 

#include <stdio.h>
int main()
{
/* the comment begins here 
  int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   } and it ends here  */
   return 0;
}

