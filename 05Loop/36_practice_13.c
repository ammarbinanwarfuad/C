//Write a C program to calculate product of digits of a number.
/* 
Write a C program to input a number from user and calculate product of its digits. How to find product of digits of a number using loop in C programming. Logic to find product of digits of a given number in C program.

Example

Input

Input number: 1234
Output

Product of digits: 24

 */
#include <stdio.h>

int main(){
    int i,num,first_digit,last_digit,rem=0,sum,product=1,temp;
    printf("Enter the number ");
    scanf("%d",&num);

        last_digit=num%10;
        printf("\nLast digit is %d", last_digit);

        temp =num;
        while (temp!=0)
        {
            rem=temp%10;
            product= product*rem;
            temp=temp/10;
        }
        first_digit = rem;
        printf("\nFirst Digit is %d", first_digit);

    printf("\n\n%d is the product of the number ", product);


return 0;
}