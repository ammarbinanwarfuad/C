//Write a C program to input month number and print number of days in that month.

/* 	month	    days
1	January     31
2	February    28/29
3	March       31
4	April       30
5	May         31
6	June        30
7	July        31
8	August      31
9	September   30
10	October     31
11	November    30
12	December    31*/

#include <stdio.h>
int main (){
    int a;
    
    printf("Enter Month number - ");
    scanf("%d", &a);

    if (a ==1 || a ==3 || a ==5 || a==7 || a==8|| a ==10 || a ==12)
    {
        printf("31 Days in this month");
    }
    else if (a ==4 || a ==6 || a ==9 || a==11)
    {
        printf("30 Days in this month");
    }
    else if (a==2)
    {
        printf("28/29 Days in this month ");
    }
    else 
    printf("Invalid input. Please type between 1-12");
    
    
    
    return 0;
}