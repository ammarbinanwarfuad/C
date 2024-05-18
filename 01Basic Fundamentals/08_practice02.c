//Write a C program to enter two numbers and find their sum.

#include <stdio.h>
int main(){
    float num1, num2, sum;
    printf("Enter Two numbers below ");
    scanf("%f%f", &num1,&num2);
    //sum = num1 + num2 ;
    printf("The sum of two numbers is %f ", num1+num2);
    //printf("The sum of two numbers is %f ", sum);

    return 0;
}