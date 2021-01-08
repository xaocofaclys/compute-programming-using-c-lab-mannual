/* Write a program to demonstrate the use of sizeof() ,const ,#define */

#include<stdio.h>
#include<stdlib.h>
#define pi 3.14 
int main(void){
    const int a = 5;//A const keyword makes a variable constant which means you can't
                    //change it's value throughout the program.
    float r;
    float area;
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);
    area = pi*r*r;
    printf("The area of the circle is: %f\n",area);
    printf("Size of the constant integer is %dbytes\n",sizeof(a));//sizeof operator/function returns the size of a particular datatype.


    
return 0;
//@xaocofachlys
}
// Input & Output: 
// Enter the radius of the circle: 4.5
// The area of the circle is: 63.584999
// Size of the constant integer is : 4bytes