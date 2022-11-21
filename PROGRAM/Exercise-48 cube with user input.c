#include <stdio.h>
#define CUBE(Y) Y*Y*Y
void main(){
  int n;
  printf("n:");
  scanf("%d",&n);
  printf("Cube of %d = %d\n",n,CUBE(n));
}
