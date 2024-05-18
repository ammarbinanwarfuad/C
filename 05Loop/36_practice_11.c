//Write a C program to find sum of first and last digit of a number.


#include <stdio.h>

int main(){
    int i,num,first_digit,last_digit,rem=0,sum;
    printf("Enter the number ");
    scanf("%d",&num);

        last_digit=num%10;
        printf("\nLast digit is %d", last_digit);

        while (num!=0)
        {
            rem=num%10;
            num=num/10;
        }
        first_digit = rem;
        printf("\nFirst Digit is %d", first_digit);

    sum= first_digit+last_digit;
    printf("\n\n%d is the sum of first and last digit", sum);


return 0;
}