#include <stdio.h>
main()
{
  printf("enter kms");
  int a,p=0;
  scanf("%d",&a);
  if(a<=5)
  {
    p=a*20;
  }
  else if(a>5&&a<=15)
  {
    p=5*20+(a-5)*10;
  }
  else
  {
    p=5*20+10*10+(a-15)*5;
  }
  printf("taxi charge=%d",p);
}
