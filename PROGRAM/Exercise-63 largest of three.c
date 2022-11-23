#include<stdio.h>
main()
{
    int A,B,C;
    printf("Enter three values\n");
    scanf("%d %d %d",&A,&B,&C);
    printf("\nLargest value is ");
    if(A>B)
    {
        if(A>C)
        printf("%d\n",A);
        else 
        printf("%d\n",C);
    }
    else
    {
        if(C>B)
        printf("%d\n",C);
        else
        printf("%d\n",B);
    }
}
