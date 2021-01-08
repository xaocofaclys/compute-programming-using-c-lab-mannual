#include<stdio.h>
#include<stdlib.h>
int main(void){
    float f;
    char ch;
    double d;
    unsigned int a;
    printf("Enter a floating pointer : ");
    scanf("%f",&f);
    printf("Enter a character : ");
    scanf(" %c",&ch);
    printf("Enter a double value");
    scanf("%lf",&d);
    printf("Enter an unsigned integer");
    scanf("%u",&a);
    printf("%f \n %ch \n%lf \n%u \n",f,ch,d,a);    
return 0;
}
// Input & Output:
// Enter a floating pointer : 1
// Enter a character : s
// Enter a double value2
// Enter an unsigned integer3
// 1.000000 
// s
// 2.000000
// 3