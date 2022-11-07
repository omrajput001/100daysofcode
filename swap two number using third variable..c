// Q30 Write a program to swap two numbe using third variable.
#include<stdio.h>
int main() {
  float first, second, temp;
  printf("Enter first number: ");
  scanf("%f", &first);
  printf("Enter second number: ");
  scanf("%f", &second);
  temp = first;
  first = second;
  second = temp;
  printf("\nAfter swapping, first number = %f\n", first);
  printf("After swapping, second number = %f", second);
  return 0;
}


