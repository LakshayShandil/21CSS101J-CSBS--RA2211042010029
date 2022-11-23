#include <stdio.h>
#include <ctype.h>
main()
{
    char character;
    printf("press any key\n");
    character=getchar();
    if(isalpha(character)>0)
        printf("The character is a letter.");
    else
        if(isdigit(character)>0)
            printf("The character is a digit.");
    else
            printf("The character is not alphanumeric.");
}
