#include <stdio.h>

int main(){

    double num1,num2,num3;
    printf("Enter Three numbers - ");
    scanf("%lf %lf %lf",&num1,&num2,&num3);

    if (num1>num2){
        if (num1>num3){printf("%lf is Greater\n",num1);}
        else {printf("%lf is Greater\n",num3);}
        }
    else{
        if(num2>num3){printf("%lf is Greater", num2);}
        else printf("%lf is Greater",num3);}


    if(num1 != num2) {
        if(num2 != num3) {
            if(num1 != num3) {}}} 

    else {
        printf("\nNumbers are equal\n");  
      }

    return 0;
}