#include<stdio.h>
void main(void)
{
  int number;
  printf("enter the number : \n");
  scanf("%d",&number);
  do
  {
    printf("enter the number : \n");
  scanf("%d",&number);
    
  if (number % 7 == 0) 
  { 
    printf("the entered number is not allowed as input\n");
  break;
  }
  }
    while(1);
printf("the code is running successfully\n");
  }
