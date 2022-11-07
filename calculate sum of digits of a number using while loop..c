// Q20 Write a program to calculate sum of digits of a number using while loop.

#include <stdio.h>
int main()
{
    int number, reminder, sum = 0;

    printf("Please Enter number: ");
    scanf("%d", &number);

    while (number > 0)
    {
        reminder = number % 10;
        sum = sum + reminder;
        number = number / 10;
    }

    printf(" Sum of the digits of Given Number = %d", sum);

    return 0;
}

