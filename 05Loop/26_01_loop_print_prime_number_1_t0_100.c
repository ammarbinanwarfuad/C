#include <stdio.h>

int main(){

    int number, i, count=0;

    /* printf("Enter your number to check - ");
    scanf("%d", &number); */


    for (number=1; number<=100; number++) //main loop
    {
               count =0;

                if (number<=1){ 
                    count = 1;
                    }
                


                for(i=2;i<=number/2;i++){ 
                    if (number%i==0){ 
                        count= 1;
                        break; 
                        }
                        } 
                        // wnd loop to check individual numbers from 2 to (goal number/2) and checking if number is prime or not. if the remainder is not 0 then its not a prime number.

                if (count==0){
                    printf (" %d ", number);
                    } 

    }
    
   
            


    return 0;
}