//Write a C program to enter length in centimeter and convert it into meter and kilometer.

#include <stdio.h>
int main(){
    float l, m, km;

    printf("Enter Length in centimeter ");
    scanf("%f",&l);

    m = l/100;
    km = m / 1000 ;

    printf("So the meter will be %f\n", m);
    printf("So the kilometer will be %f\n", km);


    return 0;
}