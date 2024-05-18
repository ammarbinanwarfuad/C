//Write a C program to enter Principle, Time, interest Rate and calculate Simple Interest.


#include <stdio.h>


int main() {
    double p,t,r,s;
    printf("Enter your Principle: ");
    scanf("%lf",&p);

    printf("Enter your Interest Rate: ");
    scanf("%lf",&r);

    printf("Enter your Time in years: ");
    scanf("%lf",&t);

    s = (p*t*r)/100;

    printf("Your Simple interest will be %lf\n",s);


  return 0;
}