// Q18 write a program to check whether a number is even or odd

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the num value= ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("Even",num);
    }
    else
    {
        printf("Odd",num);
    }
    return 0;
}
