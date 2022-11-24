#include <stdio.h>
void main(void)
{ 
  char ch;
  printf("Enter a character : ");
  ch = getchar();
  if (ch >= 65 && ch <= 91 || ch >= 97 && ch <= 123)
  {
   printf("given character %c is an alphabet\n",ch);
   }
   else if (ch >= 48 && ch <= 56)
   {
     printf("Given character %c is a digit\n",ch);
   }
   else
   {
     printf("Given character %c is neither an alphaber nor a digit\n",ch);
   }
  }
