#include <stdio.h>

int main()
{
    printf("enter marks of maths, science,english");
    int m,s,e;
    scanf("%d %d %d",&m,&s,&e);
    int sum=m+s+e;
    float p=(sum/300.0)*100;
    if(p>40)
    {
        printf("pass");
    }
    else
    {
        
        printf("fail");
    }
}
