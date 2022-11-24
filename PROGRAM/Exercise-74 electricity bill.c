#include <stdio.h>

int main()
  
{
    float units;
    printf("How many units: ");
    scanf("%f", &units);

    if (units <= 50)
    {
        if ((units * .50)>300)
        {
            printf("%f", ((units*.5)*10/100)+(units*.5));
        }
        else
        printf("%f", units*.5);
    }
    else if (units>50&&units<150)
    {
        if ((units *0.75)>300)
        {
            printf("%f", ((units*.75)*10/100)+(units*.75));
        }
        else
        {
            printf("%f", units*.75);
        }
    }
    else if (units>150&&units<250)
    {
        if ((units *1.2)>300)
        {
            printf("%f", ((units*1.2)*10/100)+(units*1.2));
        }
        else
        {
            printf("%f", units*1.2);
        }
    }
    else
    {
        if (units*1.5 >300)
        {
            printf("%f", ((units*1.5)*10/100)+(units*1.5));
        }
        else
        {
            printf("%f", units *1.5);
        }
    }
}
