#include<stdio.h>
#include<ctype.h>
main()
{
    char alphabet;
    printf("Enter an alphabet");
    putchar('\n');
    alphabet=getchar();
    if(islower(alphabet))
        putchar(toupper(alphabet));
    else
        putchar(tolower(alphabet));
}
