//Write a C program to enter temperature in Fahrenheit and convert to Celsius
#include <stdio.h>
int main(){
    float c,f;

    printf("Enter temp in Farenheit ");
    scanf("%f",&f);

    //f =  (9 / 5) * c + 32 ;
    c = (f-32) * 5 / 9;


    printf("So the temp of celsius will be %.2f\n", c);


    return 0;
}