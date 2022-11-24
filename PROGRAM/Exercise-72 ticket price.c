#include <stdio.h>
void main(void)
{
  int age, infant_age, child_age, senior_citizen_age, centenarian_age;
  infant_age = 3;
  child_age = 13;
  senior_citizen_age = 60;
  cenetenarian_age = 100;
  printf("Enter age : ");
  scanf("%d", &age);
  if ( age >= centenarian_age || age <= infant_age)
  {
    printf("Ticket Price : 0\n");
  }
  else if (age <= child_age || age >= senior_citizen_age)
  {
    printf("Ticket Price : 5\n");
  }
  else 
  { 
    printf("Ticket Price : 10\n");
  }
}
