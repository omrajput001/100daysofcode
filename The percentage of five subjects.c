

#include <stdio.h>
int main()
{
    int hindi, english, mathematics, science, computer;
    float percentage;
    printf("Enter the hindi masks= ");
    scanf("%d", &hindi);

    printf("Enter the english masks= ");
    scanf("%d", &english);

    printf("Enter the mathematics masks= ");
    scanf("%d", &mathematics);

    printf("Enter the science masks= ");
    scanf("%d", &science);

    printf("Enter the computer masks= ");
    scanf("%d", &computer);
percentage=(hindi+english+mathematics+science+computer);
printf("Percentage %f", percentage/5);
return 0;
}
