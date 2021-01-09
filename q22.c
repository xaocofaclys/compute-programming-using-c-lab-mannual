/* Write a c program to check whether an alphabet is vowel or consonant using if-else construct*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
    char ch;
    printf("Enter a character\n");
    scanf("%c",&ch);
    if((ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u'||ch == 'A'||ch == 'E'||ch == 'I'||ch == 'O'||ch == 'U')){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
return 0;
}
// Input & Output: 
// Enter a character
// d
// Consonant