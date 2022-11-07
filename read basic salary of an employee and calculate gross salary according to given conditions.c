/* 
 Q 14  Write a program to read basic salary of an employee and calculate gross salary according to given conditions:
Basic Salary <=10,000 ; HRA = 20% & DA= 80%
Basic Salary > 10,000 and <= 20,000 ; HRA =25% & DA= 90%
Basic Salary > 20,000; HRA= 30% ; & DA = 95%
using if else statement.
 */

#include <stdio.h>
int main()
{
    float salary, gross, da, hra;
    printf("Enter your salary= ");
    scanf("%f", &salary);
    if (salary <= 10, 000)
    {
        da = salary * 0.8;
        hra = salary * 0.2;
    }
    if (salary > 10, 000 && salary <= 20, 000)
        
    {
        da = salary * 0.9;
        hra = salary * .25;
    }
    if (salary > 20, 000)
        ;
    {
        da = salary * 0.95;
        hra = salary * 0.3;
    }

    printf("Gross sALARY OF EMPLOYEE = %f", salary + da + hra);

    return 0;
}

