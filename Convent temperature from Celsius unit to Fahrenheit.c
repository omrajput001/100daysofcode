// Q8 Write a program to convent temperature from Celsius unit to Fahrenheit

#include <stdio.h>
int main()
{
    float celsius;
    printf("Enter the celsius value= ");
    scanf("%f", &celsius);
    float fahrenheit;
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("This is a celsius temperature is Fahrenhteit %f",fahrenheit);
    return 0;
}


