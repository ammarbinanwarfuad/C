//Write a C program to find sum of all odd numbers between 1 to n.

#include <stdio.h>

int main(){
        int i,count,natural_numbers,sum=0;

    printf("Enter the number you want to get = ");
    scanf("%d",&count);

    for (i = 1; i <= count; i++)
    {
        /* code */
        if (i%2==1)
        {
            printf("%d  ",i);
            sum=sum+i;
        }
        
    }
    printf("\n\nSum of all even number is %d", sum);
    
return 0;
}
