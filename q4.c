/*Write a C program to demonstrate the working of printf() and scanf() in C.*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int a;
    float b;
    char c;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter a floating point number: ");
    scanf("%f",&b);
    printf("%d \n %f ",a,b);
return 0;
}
// Input & Output: 
// Enter a number: 1
// Enter a floating point number: 2
// 1 
// 2.000000