#include <stdio.h>
int main()
{
  printf("enter base and height respectively: ");
  int h,b;
  scanf("%d %d",&b,&h);
  float a=0.5*(b*h);
  printf("area = %f",a);
}
