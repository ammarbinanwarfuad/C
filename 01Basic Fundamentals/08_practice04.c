//Write a C program to enter length and breadth of a rectangle and find its perimeter.

#include <stdio.h>
int main(){
    float length, breadth, perimeter;
    printf("Enter length and breadth of a triangle below ");
    scanf("%f%f", &length,&breadth);

    perimeter = 2 * (length+breadth);
    printf("The perimeter is %f", perimeter);

    return 0;
}