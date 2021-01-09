/*Write a c program to check whether an alphabet is vowel or consonant usinig ternary operataor.*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c",&ch);
    (ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u'||ch == 'A'||ch == 'E'||ch == 'I'||ch == 'O'||ch == 'U') ? printf("Vowel"):printf("Consonant");
return 0;
}
// Input & Output:
// Enter an alphabet: a
// Vowel