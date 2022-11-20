#include <stdio.h>
void main(){
  int marks, distinction_marks=75;
  printf("Enter marks: ");
  scanf("%d",&marks);
  if(marks>distinction_marks){
    printf("user secured distintion.\n");
  }else{
    printf("User did not secure distinction.\n");
  }
}
