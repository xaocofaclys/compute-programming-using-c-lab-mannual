/*Write a program to calculate the sum of given series: 11+22+33+....NN*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int n,sum = 0,t;
    printf("Enter N\n");
    scanf("%d",&n);
    t = n;
    while(t){
        sum += t*11;
        t--;
    }
    printf("The sum of given series upto %d is: %d ",n,sum);
return 0;
}