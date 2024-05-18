//Write a C program to print all natural numbers in reverse (from n to 1). – using while loop
#include <stdio.h>

int main(){
        int i,count,natural_numbers;
    printf("Enter the number you want to get = ");
    scanf("%d",&count);

    // for (i = count; i>=1; i--)
    // {
    //     /* code */
    //     printf("%d  ",i);
    // }

    i=count;
    while (i>=1)
    {
        /* code */
        printf("%d  ",i);
        i--;
    }
    

return 0;
}