#include <stdio.h>
void main(){
  int code;
  char symbol;
  
  printf("Input an ascii code (0 to 127): ");
  scanf("%d",&code);
    symbol = code;
    printf("The symbol corresponding to %d is %c \n", code,symbol);
       }
