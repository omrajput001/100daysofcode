// Q6 Write a program to find the largest number among three number

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a= ");
    scanf("%d", &a);
    printf("Enter the value of b= ");
    scanf("%d", &b);
    printf("Enter the value of c= ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("%d is the greater number \n",a);
    }
    else if (b > a && b > c)
    {
        printf("%d is the greater number \n",b);
    }
else
{
    printf("%d is the greater number\n ",c);
}
    return 0;
}

/* 
_________________________________________________________________________________________________________________________________________________________
 
Output
Enter the value of a= 8
Enter the value of b= 199
Enter the value of c= 46
199 is the greater number 
 */