/* 
Q31 Write a program to swap two number without using third variable .
  */

 #include<stdio.h>  
 int main()    
{    
int a=100, b=500;      
printf("Before swap a=%d b=%d",a,b);      
a=a+b;    
b=a-b;    
a=a-b;    
printf("\nAfter swap a=%d b=%d",a,b);    
return 0;  
}   
