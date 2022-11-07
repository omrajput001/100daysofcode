// Q16 write a program to read an alphabet and check it is vowel or consonat using switch case.

#include<stdio.h>
int main()
{
    char alphabet;
    printf("Enter the alphabet= ");
    scanf("%c", &alphabet);
    switch (alphabet)
    {
    case 'a':
        printf("a is a vowel");
        break;
    case 'e':
        printf("e is a vowel");
        break;
    case 'i':
        printf("i is a vowel");
        break;
    case 'o':
        printf("o is a vowel");
        break;
    case 'u':
        printf("u is a vowel");
        break;

    default:
    printf("This is a consonat");
        break;
    }
    return 0;
}
/* 
__________________________________________________________________________________________________________________________________________________
 Output
 Enter the alphabet= u
u is a vowel
Enter the alphabet= z
This is a consonat
 */