#include <stdio.h>
void main(){
  int num1,num2,largest;
  printf("Enter two number separated by a space : ");
  scanf("%d %d",&num1,&num2);
  if(num1>num2)
    largest=num1;
  else if(num1<num2)
    largest=num2;
  else if(num1=num2)
    largest=(num1=num2);
  printf("Largest number = %d\n",largest);
}
