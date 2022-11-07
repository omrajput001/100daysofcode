// Q9 Write a program to convent temperature from Fahrenheit unit to Celsius

#include<stdio.h>
int main(){
    float fahrenheit;
    printf("Enter the fahrenheit value= ");
    scanf("%f", &fahrenheit);
    float celsius;
    celsius= (fahrenheit-32)*5/9;
    printf("This is a Fahrenhteit temperature is Celsius %f",celsius);
    return 0;
}

