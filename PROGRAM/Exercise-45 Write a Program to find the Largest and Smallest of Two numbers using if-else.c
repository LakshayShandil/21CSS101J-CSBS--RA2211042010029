#include<stdio.h>
void main(){
  printf("Enter 2 numbers : ");
  int a,b;
  scanf("%d %d",&a,&b);
  if(a>b)
  {
    printf("The largest number : %d\nThe smallest number : %d\n",a,b);
  }
  else
  {
    printf("The largest number : %d\nThe smallest number : %d\n",b,a);
  }
}
