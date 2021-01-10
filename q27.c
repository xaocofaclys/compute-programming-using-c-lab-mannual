/*Write a c program to calculate the sum of given series: 1^2+2^2+3^2+.......n^2;*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int n,sum = 0,t;
    printf("Enter N\n");
    scanf("%d",&n);
    t = n;
    while(t){
        sum+=t*t;
        t--;
    }
    printf("The sum of given series upto %d is: %d ",n,sum);
return 0;
//@xaocofachlys
}
// Input & Output:
// Enter N
// 3
// The sum of given series upto 3 is: 14 