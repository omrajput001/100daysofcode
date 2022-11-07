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

/* 
_________________________________________________________________________________________________________________________________________________________
 
Output
Enter the value n= 10
The value of sum (1 to 10) is= 0
The value of sum (1 to 10) is= 1
The value of sum (1 to 10) is= 3
The value of sum (1 to 10) is= 6
The value of sum (1 to 10) is= 10
The value of sum (1 to 10) is= 15
The value of sum (1 to 10) is= 21
The value of sum (1 to 10) is= 28
The value of sum (1 to 10) is= 36
The value of sum (1 to 10) is= 45
The value of sum (1 to 10) is= 55
 */