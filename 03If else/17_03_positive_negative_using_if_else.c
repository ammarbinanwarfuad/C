#include <stdio.h>

int main(){

    int a;
    printf("Enter your number - \n");
    scanf("%d",&a);

    if (a>0){printf("Your Number is positive");}
   else if (a<0){printf("Your Number is Negative");}
   else{printf("Your Number is nutral");}
    

    return 0;
}