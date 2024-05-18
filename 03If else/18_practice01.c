//Write a C program to check whether a number is divisible by 5 and 11 or not.

#include <stdio.h>

int main(){
    int let;

    printf("Enter Your Number to check ");
    scanf("%d",&let);

    
    if (let%5==0 && let%11==0){printf("\nIt is divisible by 5 and 11");}
    else{printf("\nIt is not divisible by 5 and 11");}
    


    return 0;
}