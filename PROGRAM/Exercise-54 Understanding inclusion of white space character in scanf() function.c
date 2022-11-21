#include <stdio.h>
void main(){
  int intValue;
  float floatValue;
  printf("Enter an int and afloat value: ");
  scanf("%d %f",&intValue,&floatValue);
  printf("Sum of %d and %f = %f\n",intValue,floatValue,intValue+floatValue);
}         
