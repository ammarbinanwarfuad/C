//Write a C program to enter P, T, R and calculate Compound Interest.



#include <stdio.h>
#include <math.h>


int main() {
    double p,t,r,s;
    int n=1;
    printf("Enter your Principle: ");
    scanf("%lf",&p);

    printf("Enter your Interest Rate: ");
    scanf("%lf",&r);

    printf("Enter your Time in years: ");
    scanf("%lf",&t);

    s = p* (pow((1+(r/100)),t));

    printf("Your Compound interest will be %lf\n",s);

  return 0;
}
