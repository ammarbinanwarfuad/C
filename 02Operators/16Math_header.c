#include <stdio.h>
#include <math.h>

int main(){

    //Absolute Value
    int result =abs(-5); // provides absolute value = porom man jei kono number er ;
    printf("\nAbsolute Value = %d\n",result);

    //Square Root
    double result1 = sqrt(25);
    printf("\nSquare Root = %lf\n",result1);

    //X raised to the power Y = x^y = pow(base,power)
    double result2 =pow(5,2);
    printf("\n X raised to the power Y = %lf\n",result2);

    //log(),log10(),exp(),sin(),cos(),tan()
    double x=10.5;
    double result3 =log(x);
    printf("\nlog(%lf) = %lf",x,result3);

    double result4 =log10(x);
    printf("\nlog10(%lf) = %lf",x,result4);

    double result5 =exp(x);
    printf("\nexp(%lf) = %lf",x,result5);

    double result6 =sin(x);
    printf("\nsin(%lf) = %lf",x,result6);

    double result7 =cos(x);
    printf("\ncos(%lf) = %lf",x,result7);

    double result8 =tan(x);
    printf("\ntan(%lf) = %lf",x,result8);

    //round(), trunc(), ceil(), floor()

    double result9 =round(x);
    printf("\nRound Figure(%lf) = %lf",x,result9);

    double result10 =trunc(x);
    printf("\nTrunc (without Floating NUmber)(%lf) = %lf",x,result10);

    double result11 =ceil(x);
    printf("\nCeiling Number (Nearest upper round figure)(%lf) = %lf",x,result11);

    double result12 =floor(x);
    printf("\nFloor Number (Neared Lower round figure)(%lf) = %lf",x,result12);

    return 0;
}