#include <stdio.h>

int main(){

    double num1,num2,num3;
    printf("Enter Three numbers - ");
    scanf("%lf %lf %lf",&num1,&num2,&num3);

    if (num1>num2 && num1>num3){printf("%.2lf is Greater\n",num1);}
    else if (num2>num1 && num2>num3){printf("%.2lf is Greater\n",num2);}
    else if (num3>num1 && num3>num2){printf("%.2lf is Greater\n",num3);}
    else{printf("Numbers are equal\n");}
    

    

    return 0;
}