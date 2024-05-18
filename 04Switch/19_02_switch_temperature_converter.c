#include <stdio.h>

int main(){

    int choice;
    float celsius, fahrenheit;

    printf("Select your Choice from the list below\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    scanf("%d", &choice);


    switch (choice)
    {
    case 1:
        printf("Enter temp in celcious ");
        scanf("%f",&celsius);
        fahrenheit = (1.8 * celsius) +32; 

        printf("So the temp of farenheight will be %f\n", fahrenheit);
        break;
    
    case 2:
        printf("Enter temp in Fahrenheit ");
        scanf("%f",&fahrenheit);
        celsius = (fahrenheit - 32) / 1.8;

        printf("So the temp of Celsius will be %f\n", celsius);
        break;


    default: printf("Not a correct option");
        break;
    }



    return 0;
}