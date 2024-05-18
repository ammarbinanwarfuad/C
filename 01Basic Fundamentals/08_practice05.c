//Write a C program to enter length and breadth of a rectangle and find its area.

#include <stdio.h>
int main(){
    float length, breadth, area;
    printf("Enter length and breadth of a rectangular below ");
    scanf("%f%f", &length,&breadth);
    area = length * breadth;
    printf("The area is %f", area);

    return 0;
}