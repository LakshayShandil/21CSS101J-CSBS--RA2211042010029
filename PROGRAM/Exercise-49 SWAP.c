#include<stdio.h>
#define SWAP(a,b,temp) temp=a,a=b,b=temp
void main(){
  int x=10,y=20,temp=0;
  SWAP(x,y,temp);
  printf("x=%d,y=%d\n",x,y);
}
