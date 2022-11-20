#include <stdio.h>
void main(){
  int n,sum;
  sum=0
    if(2<=n&&n<=20){
      for(int count=0;count<=n;count++){
        sum+=(count*count);
      }
      printf("%d",sum);
    }
}
