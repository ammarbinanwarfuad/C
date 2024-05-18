//Write a C program to enter marks of five subjects and calculate total, average and percentage.

#include <stdio.h>


int main() {
    double a,b,c,d,e,total,avr,per;
    printf("Enter your 5 subjects number : ");
    scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);

    total = a+b+c+d+e;
    avr = total /5 ;
    per = (total / 500) * 100;

    printf("Your Total number is %lf\n",total);
    printf("Your Average number is %lf\n",avr);
    printf("Your number percentage is %lf\n", per);

  return 0;
}
