/*Write a C program to print the following pattern:
*    
**
***
****
******/
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int r,c;
    printf("Enter the no of rows: \n");
    scanf("%d",&r);
    for(int i = 0;i<r;i++){
        for(int j = 0;j<r;j++){
            if(j <=i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
//@xaocofachlys
return 0;
}
// Input & Output: 
// Enter the no of rows: 
// 5
// *    
// **
// ***
// ****
// *****