#include <stdio.h>
main()
{
    int s=1,a[2][2];
    for(int i=0;i<2;i++){
    for(int j=0;j<2;j++)
    scanf("%d",&a[i][j]);
    printf("\n");}
    for(int i=0;i<2;i++){
        s=1;
    for(int j=0;j<2;j++){
    s*=a[i][j];
    printf("%d\n",s);}
    printf("\n");}
}
