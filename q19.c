/*Write a program in c to find the greatest among three numbers using ternary operator.*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int a,b,c;
    printf("Enter three numbers: \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    (a>b)?(a>c)? printf("a is greatest") : printf("c is greatest") :(b > c)? printf("b is greatest"): printf("c is greatest");
return 0;
}
// Input & Output:
// Enter three numbers: 
// 2
// 1
// 1
// a is greatest