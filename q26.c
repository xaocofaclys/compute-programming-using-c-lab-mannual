/*Write a c program to calculate the sum of n natural numbers*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int n,sum = 0,t;
    printf("Enter N\n");
    scanf("%d",&n);
    t = n;
    while(t){
        sum+=t--;
    }
    printf("The sum of %d natural numbers is: %d ",n,sum);
return 0;
//@xaocofachlys
}
// Input & Output:
// Enter N
// 5
// The sum of 5 natural numbers is: 15 
