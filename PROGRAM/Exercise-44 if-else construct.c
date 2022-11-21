#include <stdio.h>
void main(){
  char a;
  printf("Enter any character:");
  scanf("%c",&a);
  int b=a;
  if(b>=97&&b<=122||b>=60&&b<=90)
  {
    printf("Given charcter %c is an alphabet\n",a);
  }
  else
  {
    printf("Given character %c is not an alphabet\n",a);
  }
}
