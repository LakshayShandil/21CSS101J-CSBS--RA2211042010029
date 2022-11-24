#include<stdio.h>
main()
{
  printf("printing sum of numbers from 5 to 50.\n");
  int sum=0;
  for(int number=5;number<=50;number++)
  {
    sum=sum+number;
  }
  printf("sum of numbers is %d",sum);
}
