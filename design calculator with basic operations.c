// Q12 Write a program to design calculator with basic operations (+ , - , * , /)

#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter the a value= ");
    scanf("%d",&a);
    printf("Enter the b value= ");
    scanf("%d",&b);

    printf("Addition= %d\n",a+b);
    printf("Subtraction= %d\n",a-b);
    printf("Multiplication= %d\n",a*b);
    printf("Division= %d\n",a/b);
    return 0;
}

