#include <stdio.h>
int main(){
    int number,count,i, totalprimenumbers=0;

    for (number= 0; number<=100; number++)
    {
        count =0; // basic count = 0 to smooth count prime numbers. otherwise the program won't work.

        if (number<=1) //checking if number is 0 or 1 . Cause 0 and 1 are not prime numbers by default.
        {
           count++;
        }


        for(i=2;i<=number-1;i++) // using this loop for checking number 2 to destination for checking if the number is a prime or not.
        {
            if (number%i==0) // if number%i= 0 then thats a prime number so using if condition. and then the prime number increase count value.
            {
               count++; 
               break;

            }
        }


        if (count==0) // at the end of the checking if count remains 0 that's a prime number. otherwise that is not.
        {
            printf("%d ", number);
            totalprimenumbers++;
        }
        
    }
    

    printf("\nTotal Prime numbers %d\n", totalprimenumbers);

    return 0;
}