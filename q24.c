/*Write a c program to read the marks of physics chemistry and biology subjects. And calculate 
 the average marks in Science subject and display the grade by using switch case.*/
 #include<stdio.h>
 #include<stdlib.h>
 int main(void){
    float  p,c,b;
    printf("Enter the marks in physics chemistry and biology");
    scanf("%f%f%f",&p,&c,&b);
    int avg;
    int grade;
    avg = (p+c+b)/3;
    grade = avg/10;
    printf("%d\n%d",grade,avg);
    switch(grade){
        case 9:printf("S");
            break;
        case 8: printf("A");
            break;
        case 7: printf("B");
            break;
        case 6: printf("C");
            break;
        case 5: printf("D");
            break;
        default:printf("E");
            break;


    }
 return 0;
 }
// Enter the marks in physics chemistry and biology:
// 98
// 99
// 100
// S