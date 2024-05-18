#include <stdio.h>

int main(){
    int i,n,fact=1;

    printf("Enter any number to check Factorial - ");
    scanf("%d", &n);

    for (i = 1; i <=n; i++)
    {
        fact = fact *i;
    }
    printf("The %d factorial is = %d", n, fact);


    /*Output
        n =4 , fact =1;
        i=1; fact = 1*1 = 1;
        i=2; fact = 1*2 = 2;
        i=3; fact = 2*3 = 6;
        i=4; fact = 6*4 = 24;
    S0 4! = 24
    
    */


    return 0;
}