//Write a C program to enter two angles of a triangle and find the third angle.

#include <stdio.h>


int main()
{
    double a,b,c;

    printf("Enter two angles of a traingle: ");
    scanf("%lf%lf", &a,&b);

    c = 180 - (a+b);

    printf("3rd traingle is %.2lf", c);

    return 0;
}