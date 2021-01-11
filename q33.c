/*Write a c program to convert a number into it's binary equivalent*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int n,q,r;
    printf("Enter N\n");
    scanf("%d",&n);
    unsigned i;
    printf("The binary equivalent of %d is: ",n);
    for (i = 1 << 31; i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
//@xaocofachlys
return 0;
}
// Input & Output: 
// Enter N
// 12
// The binary equivalent of 12 is: 00000000000000000000000000001100