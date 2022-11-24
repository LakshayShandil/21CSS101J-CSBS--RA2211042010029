#include <stdio.h>

int main()
{
    int n,x,y;
    printf("Enter N,X,Y : ");
    scanf("%d %d %d",&n,&x,&y);
    if(y%x==0&&y<=(n*x))
    {
    printf("YES");
    }
    else
    {
    printf("NO");
    }
}
