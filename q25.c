/*Write a program in c to design a basic calculator with addition subtraction multiplication division and remainder */
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int a,b;
    float result;
    char ch;
    printf("Enter two numbers: \n");
    scanf("%d%d",&a,&b);
    printf("press '+' for addition \npress '-' for subtraction \npress '*' for multiplication \npress '/' to get the quotient \npress '%' to get the remainder");
    printf("\nEnter Your Choice!\n");
    scanf(" %c",&ch);
    switch(ch){
        case '+': printf("The sum of the two numbers is : %d",a+b);
            break;
        case '-': printf("The difference between the two numbers is: %d",a-b);
            break;
        case '*': printf("The product of the two number is: %d",a*b);
            break;
        case '/': printf("The quotient of a/b is: %d",a/b);
            break;
        case '%': printf("The reaminder of a%b is: %d",a%b);
            break;
        default: printf("Invalid input check again!\n");
            break;
    }
return 0;
//@xaocofachlys
}
// Input & Output:
// Enter two numbers: 
// 1
// 2
// press '+' for addition 
// press '-' for subtraction
// press '*' for multiplication
// press '/' to get the quotient
// press '' to get the remainder
// Enter Your Choice!
// -
// The difference between the two numbers is: -1