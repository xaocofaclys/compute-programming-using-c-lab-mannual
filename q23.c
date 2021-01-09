// Write a c program to find the roots of a quadratic equation using if-else construct.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void){
    int a,b,c,d;
    float r1,r2;
    printf("Enter a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    d = (b*b-(4*a*c));
    if(d > 0){
        r1 = (((-1)*b + sqrt(d))/2*a);
        r2 = (((-1)*b - sqrt(d))/2*a);
        printf("Real and distinct roots of the given quadratic equation is: %f and %f ",r1,r2);
    }
    else if(d == 0){
        r1 = (-1)*b/2*a;
        printf("Real and equal roots are: %f",r1);
    }
    else{
        printf("There is no real roots only imaginary");
    }


return 0;
}
// Input & Output:
// Enter a,b,c
// 1
// -7
// 12
// Real and distinct roots of the given quadratic equation is: 4.000000 and 3.000000 