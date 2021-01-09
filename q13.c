/* Write a program to compute compound interest. */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define rate 100
int main(void){
    float p,cI,amt,a;
    int t;
    printf("Enter p and t");
    scanf("%f",&p);
    scanf("%d",&t);
    a = 1+(rate/100);
    cI = p*pow(a,t);
    amt = p+cI;
    printf("Compound Interest: %f \nAmount: %f",cI,amt);
return 0;
}
// Input & Output:
// Enter p and t
// 5
// 6
// Compound Interest: 320.000000 
// Amount: 325.000000