//Write a C program to find sum of all natural numbers between 1 to n.

#include <stdio.h>

int main(){
    int i,count,natural_numbers,sum=0;

    printf("Enter the number you want to get = ");
    scanf("%d",&count);

    for (i = 1; i <= count; i++)
    {
        /* code */
        printf("%d  ",i);
        sum=sum+i;
    }
    printf("\n\nSum of all natural number is %d", sum);


return 0;
}