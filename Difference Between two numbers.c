// Q2  Write a program to find the difference between two number.

#include<stdio.h>
int main(){
    int a,b,diff=0;
    printf("Enter the a value= ");
    scanf("%d",&a);
    printf("Enter the b value= ");
    scanf("%d",&b);
    if (a>b)
    {
        diff=a-b;
    }
    else{
        diff=b-a;
    }
    printf("Difference between %d and %d = %d",a,b,diff);
    return 0;
}


