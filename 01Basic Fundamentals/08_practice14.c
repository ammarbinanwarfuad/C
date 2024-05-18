//Write a C program to enter base and height of a triangle and find its area.

#include <stdio.h>


int main()
{
    double base,height,area;

    printf("Enter base and height of a traingle: ");
    scanf("%lf%lf", &base,&height);

    area = (base*height)/2;

    printf("Area of traingle is %.2lf", area);

    return 0;
}