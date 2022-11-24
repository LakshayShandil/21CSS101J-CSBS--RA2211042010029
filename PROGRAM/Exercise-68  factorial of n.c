#include<stdio.h>
void main(void)
{
  int number;
  printf("printing factorial of the number : \n");
  scanf("%d",&number);
  int factorial = 1;
  for(int i=1; i<= number;i++)
  {
    factorial = factorial * i;
  }
  printf("factorial of the number is %d\n",factorial);
}
