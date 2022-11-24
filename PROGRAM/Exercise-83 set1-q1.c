#include <stdio.h>
int main()
{
    printf("Enter number of input : ");
    int n;
    scanf("%d",&n);
    char a[n];
    printf("enter array elements(h for hybrid and o for organic) : ");
    for (int i=0; i<n ;i++)
    {
        scanf("%c",&a[i]);
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
       if(a[i]=='h')
       {
                c++;
       }
    }
        printf("Number of hybrid apple : %d",c);
}
