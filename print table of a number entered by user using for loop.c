// Q25 Write a program to print table of a number entered by user using for loop

#include <stdio.h>
int main(){
   int i, num;
   printf("Enter number to print table: ");
   scanf("%d", &num);
   for(i=1; i<=10; i++){
      printf("%d x %d = %d\n", num, i, (num*i));
   }
   return 0;
}

