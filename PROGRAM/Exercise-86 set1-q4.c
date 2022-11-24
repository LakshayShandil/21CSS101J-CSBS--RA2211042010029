#include<stdio.h>
void main()
{
  int n=0,s=0;
  printf("Enter the number of elements : ");
  scanf("%d",&n);
  int arr{n];
  for(int i=0;i<n;i++)
   {
      scanf("%d",&arr[i]);
   }
   for(int i=0;i<n;i++)
   {
       if(arr[i]%2==0)
       {
           s++;
       }
   }
  printf("Number of even numbers = %d\n",s);
}
