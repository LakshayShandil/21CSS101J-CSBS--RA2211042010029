#include <stdio.h>

int main()
{
    int a=0,s=1;
    while(++a<101)
    s*=a;
    printf("%d\n",s);
}
