// Q17 write a program to read an alphabet and check it is vowel or consonat using logical operaters and if else.

#include<stdio.h>
int main(){
    char alphabet;
    printf("Enter the alphabet= ");
    scanf("%c",&alphabet);
    if(alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u')
    {
        printf("Vowel %c",alphabet);
    }
    else
    {
        printf("This is a consonat",alphabet);
    }
    return 0;
}

