// Q19 write a program to check whether a number is prime or not

#include <stdio.h>
int main()
{
    int n, i=1, count = 0;
    printf("Enter the n value: ");
    scanf("%d", &n);
    for (i; i <= n; i++)
    {
        if (n % i == 0)
        {
             count++;
        }
    }

     if (count == 2)
    
       printf("Prime number");
    
     else
    
        printf("Odd number");
    

    return 0;
}


