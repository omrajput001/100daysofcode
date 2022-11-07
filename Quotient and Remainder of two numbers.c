// Q4 Write a program to find the quotient and remainder of two numbers.

#include <stdio.h>
int main()
{
    int dividend, divisor, quotient, remainder;
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);
    quotient = dividend / divisor;
    printf("quotient= %d\n", quotient);
    remainder = dividend % divisor;
    printf("remainder= %d", remainder);
    return 0;
}

