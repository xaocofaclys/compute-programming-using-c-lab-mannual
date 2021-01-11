/*Write a c program to check whether a number is palindrome or not*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
  int n,q,rem,rev;
  rev = 0;
  printf("Enter N\n");
  scanf("%d",&n);
  q = n;
  while(q){
      rem = q%10;
      rev = (rev*10)+rem;
      q/=10;
  }  
  if(rev == n){
      printf("The number is palindrome\n");
  }
  else{
      printf("It's noto palindrome\n");
  }
//@xaocofachlys
return 0;
}
// Input & Output:
// Enter N
// 121
// The number is palindrome