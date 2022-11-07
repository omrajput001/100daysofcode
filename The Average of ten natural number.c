// Q5 Write a program to find the average of ten natural number

#include <stdio.h>
int main()
{
    int i = 0, sum = 0, n;
    printf("Enter the value n= ");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("The value of sum (1 to 10) is= %d\n", sum);
        i++;
        sum += i;
    }
    return 0;
}

