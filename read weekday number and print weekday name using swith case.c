// Q 11 Write a program to read weekday number and print weekday name using swith case

#include <stdio.h>
int main()
{
    int week;
    printf("Enter the weekday(01 to 07) ");
    scanf("%d", &week);
    switch (week)
    {

    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Invalid Input! Please enter week number between 1-7. ");
    }

    return 0;
}

