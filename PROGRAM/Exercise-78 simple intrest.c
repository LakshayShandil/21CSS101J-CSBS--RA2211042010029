#include <stdio.h>
main()
{
  int p,t;
  float r,si;
  printf("enter a principal,rate,time\n");
  scanf("%d %f %d",&p,&r,&t);
  si=p*r*t/100;
  printf("simple intrest=%f",si);
}
