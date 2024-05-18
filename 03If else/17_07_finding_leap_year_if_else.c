#include <stdio.h>

int main(){

    int n;
    printf("Enter the Year ");
    scanf("%d",&n);

    if (n%400==0){printf("This is a leap year");}
    else if(n%4==0 && n%100!=0){
        printf("This is a leap year");
    }
    else{printf("This is not a leap year");}
    


    return 0;
}