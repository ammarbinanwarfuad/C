#include <stdio.h>

int main(){

    int marks;

    printf("Enter your number - ");
    scanf("%d",&marks);

    if (marks>=80 && marks<=100){printf("\n You have got A+");}
    else if (marks>=70 && marks<=79){printf("\n You have got A");}
    else if (marks>=60 && marks<=69){printf("\n You have got A-");}
    else if (marks>=50 && marks<=59){printf("\n You have got B");}
    else if (marks>=40 && marks<=49){printf("\n You have got C");}
    else if (marks>=33 && marks<=39){printf("\n You have got D");}
    else if (marks<=32 && marks>=00){printf("\n You have got F");}
    else{printf("The number is not valid.");}



    return 0;
}