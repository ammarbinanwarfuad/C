#include <stdio.h>

int main(){

    int choice;
    float num1,num2,result;

    printf("Enter Your first number - ");
    scanf("%f",&num1);
    printf("Enter Your Second number - ");
    scanf("%f",&num2);

    printf("Select your Choice from the list below\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Divition\n");
    scanf("%d", &choice);


    switch (choice)
    {
    case 1:
        result = num1 + num2;
        printf("Addition of two given number is %f\n", result);
        break;
    case 2:
        result = num1 - num2;
        printf("Subtraction of two given number is %f\n", result);
        break;
    case 3:
        result = num1 * num2;
        printf("Multiplication of two given number is %f\n", result);
        break;
    case 4:
        result = num1 / num2;
        printf("Divition of two given number is %f\n", result);
        break;


    default: printf("Not a correct option");
        break;
    }



    return 0;
}