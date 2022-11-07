// Q 15 write a program to print all even number from 1 to N using for loop

#include <stdio.h>
int main()
{
    int i, n;
    printf("Print all even numbers till= ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("Even: %d\n", i);
        }
    }
    return 0;
}
