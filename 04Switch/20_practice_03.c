//Write a C program to check whether a number is positive, negative or zero using switch case.

#include <stdio.h>
int main(){

    int num;
    printf("Enter your number - ");
    scanf("%d", &num);

    switch ((int)(num>0))
    {
    case 1: //true = number positive
        printf("Number is Positive");
        break;

    case 0: // false = number either negative or zero
            switch ((int)(num<0))
            {
            case 0:
                printf("Number is Zero");
                break;
            case 1: 
                printf("Number is Negative");
                break;
            }
        break;
    
    default:
        break;
    }







    return 0;
}