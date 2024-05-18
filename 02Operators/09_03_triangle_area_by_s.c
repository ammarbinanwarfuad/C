#include <stdio.h>
#include <math.h>
int main(){

    double a,b,c,s,area; //using double for using sqrt.
    printf("Enter the value of a,b,c to calculate triangles area - ");
    scanf("%lf%lf%lf",&a,&b,&c);

    s = (a+b+c) / 2;

    area = sqrt( s*(s-a)*(s-b)*(s-c));

    printf("So the area of the triangle is %.2lf\n", area);


    return 0;
}