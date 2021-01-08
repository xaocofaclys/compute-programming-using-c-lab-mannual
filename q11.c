//Write a program to demonstrate thee working of basic operators in c.
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int a ,b,sum,prod,quotient,rem,diff;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    sum = a+b;
    prod = a*b;
    diff = a-b;
    quotient = a/b;
    rem = a%b;
    printf("Sum of the two numbers is : %d \nDifference of the two numbers is: %d \nProduct of the two numbers is: %d \nQuotient of the a/b is : %d \nRemainder of a/b is : %d\n",sum,diff,prod,quotient,rem);
return 0;
//@xaocofachlys
}
// Input&Output: 
// Enter two numbers: 10
// 30
// Sum of the two numbers is : 40 
// Difference of the two numbers is: -20
// Product of the two numbers is: 300
// Quotient of the a/b is : 0
// Remainder of a/b is : 10