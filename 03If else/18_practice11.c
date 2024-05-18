/*Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill*/

#include <stdio.h>

int main(){

    float unit, amt,tamt,sur;

    printf("Total Units consumed - ");
    scanf("%f",&unit);


    if (unit<=50)
    {
        amt = unit * 0.5;
    }
    else if (unit<=150)
    {
        amt= 25 + ((unit-50) * 0.75);
    }
    else if (unit<=250){
        amt = 25 + 75 + ((unit-150)*1.2);
    }
    else {
        amt = 25+75+120 + ((unit-250)*1.5);
    }
    sur = amt*0.2;
    tamt= amt +sur;
    
    printf("Electricity bill = %.2f", tamt);

    return 0;
}