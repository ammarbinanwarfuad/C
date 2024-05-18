//Write a C program to input all sides of a triangle and check whether triangle is valid or not.

/* A triangle is valid if sum of its two sides is greater than the third side. Means if a, b, c are three sides of a triangle. Then the triangle is valid if all three conditions are satisfied
a + b > c
a + c > b and
b + c > a */

#include <stdio.h>

int main(){
    int a,b,c;

    printf("Enter 3 sides of triangle - ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a+b)>c && (a+c)>b && (b+c)>a)
    {
        printf("This is a valid Triangle");
    }
    else printf("This is not a valid Triangle");
    


    return 0;
}