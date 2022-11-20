#include <stdio.h>
void main(){
  int amount_given,bill_amount;
  scanf("%d %d",&amount_given,&bill_amount);
  printf("%d\n",amount_given/bill_amount);
  printf("%d\n",amount_given%bill_amount);
}
