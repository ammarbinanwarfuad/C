//Write a C program to enter temperature in Celsius and convert it into Fahrenheit.

#include <stdio.h>
int main(){
    float c,f;

    printf("Enter temp in celcious ");
    scanf("%f",&c);

    //f =  (9 / 5) * c + 32 ;
    f = (c*9) / 5 +32; 

    printf("So the temp of farenheight will be %f\n", f);


    return 0;
}