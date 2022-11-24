#include <stdio.h>

int main()
{
    printf("enter a time in days");
    int y,m,d;
    scanf(" %d",&d);
    y=d/365;
    d%=365;
    m=d/30;
    d%=10;
    printf("no. of the year= %d\n no.of month= %d\n no. of days=%d\n",y,m,d);
}
