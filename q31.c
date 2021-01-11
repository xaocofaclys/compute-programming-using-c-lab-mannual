/*Write a c program to calculate the sum of digits of a number*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int n,q,sum = 0;
    printf("Enter a number: \n");
    scanf("%d",&n);
    q = n;
    while(q){
        sum += q%10;
        q/=10;
    }
    printf("The sum of the digits of a number is: %d",sum);
return 0;
}
// Input & Output: 
// Enter a number: 
// 456
// The sum of the digits of a number is: 15