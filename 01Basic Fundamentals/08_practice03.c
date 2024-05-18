//Write a C program to enter two numbers and perform all arithmetic operations.

#include <stdio.h>
int main(){
    float num1, num2, sum;
    printf("Enter Two numbers below ");
    scanf("%f%f", &num1,&num2);

    printf("The sum of two numbers is %f \n", num1+num2);
    printf("The subtraction of two numbers is %f \n", num1-num2);
    printf("The multiplication of two numbers is %f \n", num1*num2);
    printf("The divition of two numbers is %f \n", num1/num2);


    return 0;
}