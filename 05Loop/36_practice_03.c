//Write a C program to print all alphabets from a to z. – using while loop

#include <stdio.h>

int main(){
        char count;
        int i;
    printf("Enter the number you want to get = ");
    scanf("%c",&count);

    for (i = 'a'; i <= count; i++)
    {
        /* code */
        printf("%c  ",i);
    }
return 0;
}