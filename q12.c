//Write a program to Compute simple interest . 
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int t;
    float principal, simple_interest,ammount,rate;
    printf("Enter principal time and rate: ");
    scanf("%f",&principal);
    scanf("%d",&t);
    scanf("%f",&rate);
    simple_interest = (principal*rate*t)/100;
    ammount = principal+simple_interest;
    printf("simple interest: %f\n Total Ammount is: %f",simple_interest,ammount);
return 0;
}
// Input & Output: 
// Enter principal time and rate: 2 
// 3
// 5
// simple interest: 0.300000 
// Total Ammount is: 2.300000