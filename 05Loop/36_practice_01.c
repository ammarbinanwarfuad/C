//Write a C program to print all natural numbers from 1 to n. – using while loop

#include <stdio.h>

int main(){
    int i,count,natural_numbers;

    printf("Enter the number you want to get = ");
    scanf("%d",&count);

    for (i = 1; i <= count; i++)
    {
        /* code */
        printf("%d  ",i);
    }
    

return 0;
}