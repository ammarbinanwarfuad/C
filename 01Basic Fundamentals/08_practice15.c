//Write a C program to calculate area of an equilateral triangle.

#include <stdio.h>
#include <math.h>


int main()
{
    double a,b,c;

    printf("Enter two angles of a traingle: ");
    scanf("%lf", &a);

    c = (sqrt(3)/4)*a*a;

    printf("3rd traingle is %.2lf", c);

    return 0;
}