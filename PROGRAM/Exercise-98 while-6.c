#include <stdio.h>
int main()
{
    int a=0,n;
    scanf("%d",&n);
    while(a++<=n)
    {
        if(a%2==0)
        printf("%d\n",a);
    }
  return 0;
}
