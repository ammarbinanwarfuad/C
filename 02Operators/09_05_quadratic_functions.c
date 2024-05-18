#include <stdio.h>
#include <math.h>
int main(){

    double a,b,c,d,x1,x2;

    printf("Enter the Value of A, B, C of the equation ");
    scanf("%lf %lf %lf",&a,&b,&c);

    d = sqrt(b*b-4*a*c);

    x1 = (-b+d)/(2*a);
    x2 = (-b-d)/(2*a);

    printf("The value of x1 is %.2lf\n",x1);
    printf("The value of x2 is %.2lf\n",x2);

    return 0;
}