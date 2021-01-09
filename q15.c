/*Write a program to swap two variable without using a third variable.*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int a,b;
    printf("Enter two numbers: \n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("\nA & B before swapping : %d %d ",a,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("\nA & B after swapping : %d %d",a,b);
return 0;
}
// Input & Output:
// Enter two numbers: 
// 1
// 2
// A & B before swapping : 1 2 
// A & B after swapping : 2 1