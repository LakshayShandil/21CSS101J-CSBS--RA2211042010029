#include <stdio.h>
void main(){
  int n,m,score=0;
  scanf("%d %d",&n,&m);
  score=((n-1)*(m-1)*2+m+n-2);
  printf("%d",score);
}
