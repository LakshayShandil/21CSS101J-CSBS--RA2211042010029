#include<stdio.h>
int main(){
  int n;
  printf("n : ");
  scanf("%d",&n);
  (n&1)?printf("%d is odd\n",n):printf("%d is even\n",n);
               return 0;
               }
