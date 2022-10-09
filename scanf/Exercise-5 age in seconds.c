#include <stdio.h>
void main(){
  float years, secs;
  printf("input your age in years:");
  scanf("%f",&years);
  secs = years * 365 * 24 * 60 * 60;
  printf("You have lived for %f seconds\n",secs);
}
