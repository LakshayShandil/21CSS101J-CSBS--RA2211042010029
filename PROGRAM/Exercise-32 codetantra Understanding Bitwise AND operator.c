#include <stdio.h>
void main(){
  int num1 = 10, num2 = 3, result1, result2;
  result1 = num1|num2;
  result2 = num1^num2;
  printf("Bitwise OR result = %d\n",result1);
  printf("Bitwise XOR result = %d\n",result2);
}
