//Write a C program to convert days into years, weeks and days.

#include <stdio.h>
int main(){
    float d,y,w,m;

    printf("Enter days number ");
    scanf("%f",&d);

    y = d / 365;
    w = d / 7;
    m = d / 30;

    printf("Expected weeks %f\n", w);
    printf("Expected months %f\n", m);
    printf("Expected years %f\n", y);


    return 0;
}