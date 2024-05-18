#include <stdio.h>

int main(){

    double num1,num2;
    printf("Enter Two numbers - ");
    scanf("%lf %lf",&num1,&num2);

    if (num1>num2){printf("%lf is Greater\n",num1);}
    else if (num1<num2){printf("%lf is Greater\n",num2);}
    else{printf("Numbers are equal\n");}
    

    

    return 0;
}