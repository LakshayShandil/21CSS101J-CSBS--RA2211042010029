#include<stdio.h>
void main()
{
    int count,i;
    float weight,height;
    
    count=0;
    printf("Enter weight and height for 10 boys\n");
    
    for(i=1;i<=10;i++)
    {
        scanf("%f %f",&weight,&height);
        if(weight<50&&height>170)
        count=count+1;
    }
    printf("Number of boys with weight<50kg\n");
    printf("and height>170cm=%d\n",count);
}
