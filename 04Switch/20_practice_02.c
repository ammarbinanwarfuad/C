//Write a C program to check whether a number is even or odd using switch case.

#include <stdio.h>

int main(){
    char num;

    printf("Enter your number - ");
    scanf("%c", &num);


/*     switch ((int)(num%2==0))
    {
    case 0:
        printf("the number is Odd");
        break;

    case 1:
        printf("the number is Even");
        break;
    
    default:
        break;
    } */

    switch ((int)(num%2==0)) // either even or odd
    {
    case 1: // true so even
        printf("the number is Even");
        break;

    case 0: // false so it can be odd or not a digit
            switch ((int)(num%2!=0)){
            case 1:
                printf("The number is odd");
                break;
            case 0:
                printf("This is not a number");
                break;
            default:
                break;
            }

        break;

    
    
    default:
        break;
    }



    return 0;
}