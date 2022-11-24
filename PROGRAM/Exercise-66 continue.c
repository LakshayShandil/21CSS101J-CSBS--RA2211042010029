#include<stdio.h>
void main(void)
{
  for (int number = 1; number < 10; number ++) 
  {
    if (number == 5)
    {
      continue;
    }
    printf("%d\n",number);
  }
}
