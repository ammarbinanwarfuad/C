//Write a C program to input any character and check whether it is alphabet, digit or special character.

#include <stdio.h>
int main (){
    char a;
    
    printf("Enter a character - ");
    scanf("%c",&a);

    if (a >='A' && a<='Z' || a>='a' && a<='z')
    {
        printf("Your character is Alphabet");
    }
    else if (a >='0' && a<='9')
    {
        printf("Your character is Digit");
    }

    else
    printf("Your character is Special Symbol");
    

    return 0;
}