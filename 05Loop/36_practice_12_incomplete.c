//Write a C program to swap first and last digits of a number.

#include <stdio.h>

int main(){
    int i,num,first_digit,last_digit,rem=0,temp,digit=0,swapped_number=0;
    printf("Enter the number ");
    scanf("%d",&num);

        last_digit=num%10;
        printf("\nLast digit is %d\n", last_digit);

    temp=num;
        while (temp!=0)
        {
            rem= temp%10;
            printf("%d is the digit\n",rem);
            digit++;
            temp=temp/10;
        }
        first_digit = rem;
        printf("\nFirst Digit is %d", first_digit);
        
    for (i = 1; i <=digit; i++)
    {
        swapped_number = last_digit* 10 + 
    }
    
        
        
        
        printf("\n Total number of digit is %d", digit);//temp = 


return 0;
}
