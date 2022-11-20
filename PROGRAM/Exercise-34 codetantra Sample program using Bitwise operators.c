#include <stdio.h>
void main(){
  inr x,y,z, max, min;
  x=99;
  y=199;
  max = x^((x^y)&-(x<y));
  min = y^((x^y)&-(x<y));
  printf("Maximum of given numbers = %d\nMinimum of given number = %d\n",max,min);
}
