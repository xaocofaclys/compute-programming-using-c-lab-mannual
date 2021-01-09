/* Write a c program to find the greatest of three numbers using if else construct */
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int a,b,c;
    printf("Enter three numbers: \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b&&a>=c){
        printf("\na is greatest");
    }
    else if(b>=a&&b>=c){
        printf("\n b is greatest");
    }
    else{
        printf("\n c is greatest");
    }
return 0;

}
// Input & Output:
// Enter three numbers:
// 1
// 2
// 3
// c is greatest