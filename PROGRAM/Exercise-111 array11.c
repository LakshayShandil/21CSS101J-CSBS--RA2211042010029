#include <stdio.h>
void main()
{
    int n=0;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int l=a[0],d=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=l)
        {
            d=1;
            break;
        }
    }
    if(d==0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
