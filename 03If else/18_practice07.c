//Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.

/*
A triangle is said Equilateral Triangle, if all its sides are equal. If a, b, c are three sides of triangle. Then, the triangle is equilateral only if 
a == b == c.

A triangle is said Isosceles Triangle, if its two sides are equal. If a, b, c are three sides of triangle. Then, the triangle is isosceles if either 
a == b or a == c or b == c.

A triangle is said Scalene Triangle, if none of its sides are equal.*/

#include <stdio.h>

int main(){
    int a,b,c,sum;

    printf("Enter 3 sides of triangle - ");
    scanf("%d %d %d", &a, &b, &c);

    if (a==b && b==c)
    {
        printf("This is a Equilateral Triangle");
    }

    else if (a==b || a==c || b==c)
    {
        printf("This is a Isosceles Triangle");
    }

    else 
    printf("This is a Scalene Triangle");
    


    return 0;
}