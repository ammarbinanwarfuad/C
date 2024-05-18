//Write a C program to print all odd number between 1 to 100.

#include <stdio.h>

int main(){
        int i,count,natural_numbers;

    printf("Enter the number you want to get = ");
    scanf("%d",&count);

    for (i = 1; i <= count; i++)
    {
        /* code */
        if (i%2==1)
        {
            printf("%d  ",i);
        }
        
    }
    
return 0;
}
