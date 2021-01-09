/*Write a program to swap two variable using third variable.*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int a,b,temp;
    printf("Enter two numbers: ");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("\nA and B before Swapping : %d %d ",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("\nA and B after Swapping : %d %d ",a,b);

return 0;
}
// Input & Output:
// Enter two numbers: 
// 1
// 2
// A and B before Swapping : 1 2 
// A and B after Swapping : 2 1