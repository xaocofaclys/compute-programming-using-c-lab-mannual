/*Write a program to demonstrate method for declaring and initializing variables in c*/

#include<stdio.h>
#include<stdlib.h>
int main(void){
    int a = 1;
    float b = 1;
    char ch = 'A';
    double d = 1;
    long int al = 1;
    long long int all = 1;
    printf(" %d \n %f \n %c \n %lf \n %ld \n %lld ",a,b,ch,d,al,all);
    //%d is a format specifier for int
    //%f is a format specifier for  float
    //%c is a format specifier for character
    //%lf is a format specifier for double
    //%ld is a format specifier for long  int 
    //%lld is a format specifier for long long int
return 0;
}
// input and output:
//  1 
//  1.000000
//  A
//  1.000000
//  1
//  1