// Q10 write a program to print days of week with its respective number.

#include <stdio.h>
int main()
{
    int week;
    printf("Enter the week (01 to 07:) ");
    scanf("%d", &week);
    if (week == 1)
    {
        printf("Monday");
    }
    else if (week == 2)
    {
        printf("Tuseday");
    }
    else if (week == 3)
    {
        printf("Wednesday");
    }
    else if (week == 4)
    {
        printf("Thursday");
    }
    else if (week == 5)
    {
        printf("Friday");
    }
    else if (week == 6)
    {
        printf("Saturday");
    }
    else if (week == 7)
    {
        printf("Sunday");
    }
    else
    {
        printf("Invalid Input! Please enter week number between 1-7.");
    }
}

