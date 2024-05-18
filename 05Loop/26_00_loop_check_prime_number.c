#include <stdio.h>
int main(){
    int number,i,count=0;

    printf("Enter your number to check - ");
    scanf("%d",&number);

    if (number<=1) // to avoid 0 and 1 as a prime number.
    {
        count++;
    }
    

    for (i = 2; i <number; i++) // to check if the given number is divisible by other numbers from 2 to number-1.
    //if i want to make more efficient code i'll use ------  for (i = ; i <= number/2; i++)
    // if i want to make super efficient code i'll use <math.h> ----- for (i = ; i <= sqrt(number); i++)
    // i can also put the whole for loop inside of else after the first if condition.

    {
        if (number%i==0)
        {
           count++; // if we found any divisible number count will increase and immediately break the loop.
           break;
        }
        
    }


    if (count==0) // checking if default count value incresed or not , even if only one time division will happend the given number is not a prime number.
    {
        printf("This is a prime number");
    }else printf("This is not a prime number");
    
    



    return 0;
}