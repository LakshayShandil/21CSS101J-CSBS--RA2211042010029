#include <stdio.h>
void main(void)
{
  double gpa;
  printf("Enter gpa between 0.0 and 5.0 : ");
  scanf("%lf", &gpa);
  if (gpa >= 4.5 && gpa <= 5.0)
  {
    printf("Grade : A\n");
  }
  else if (gpa >= 3.5 && gpa <= 4.49)
  {
    printf("Grade : B\n"):
  }
  else if (gpa >= 2.5 && gpa <= 3.49)
  {
    printf("Grade : C\n");
  }
  else if (gpa >= 1.5 && gpa <= 2.49)
  { 
    printf("Grade : D\n");
  }
  else if (gpa >= 0.0 && gpa <=1.49)
  {
    printf("Grade : E\n");
  }
  else
  {
    printf("Please enter GPA in between 0.0 and 5.0\n");
  }
}
