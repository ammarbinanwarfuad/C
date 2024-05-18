//Write a C program to print all even numbers between 1 to 100. – using while loop

#include <stdio.h>

int main(){
        int i,count,natural_numbers;

    printf("Enter the number you want to get = ");
    scanf("%d",&count);

    for (i = 1; i <= count; i++)
    {
        /* code */
        if (i%2==0)
        {
            printf("%d  ",i);
        }
        
    }
    
return 0;
}