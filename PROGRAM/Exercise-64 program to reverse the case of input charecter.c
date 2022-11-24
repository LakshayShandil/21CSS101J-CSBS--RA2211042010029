#include <stdio,h>
#include<ctype.h> 
int main()
{
  printf("Registration number = RA2211042010033"\n);
  char alphabet;
  printf("Enter an alphabet : t");
  putchar('\n');  
  alphabet = getchar();
  printf("\n\nReverse case of %c is T",alphabet);
  if(islower(alphabet));
  putchar(toupper(alphabet));
  else
    printf("%c",tolower(alphabet));
  return 0;
}
