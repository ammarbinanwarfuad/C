//Write a C program to enter radius of a circle and find its diameter, circumference and area.

#include <stdio.h>
int main(){
    float radius, diameter, circumference,area;
    printf("Enter radius of a circle below ");
    scanf("%f", &radius);
    
    diameter = 2*radius;
    circumference = 2 * 3.1416 * radius;
    area = 3.1416 * radius * radius;

    printf("The area is %f\n", area);
    printf("The circumference is %f\n", circumference);
    printf("The diameter is %f\n", diameter);

    return 0;
}