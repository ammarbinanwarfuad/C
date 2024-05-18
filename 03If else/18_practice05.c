//Write a C program to input angles of a triangle and check whether triangle is valid or not.

//A triangle is said to be a valid triangle if and only if sum of its angles is 180 °.

#include <stdio.h>

int main(){
    int a,b,c,sum;

    printf("Enter 3 angles of triangle - ");
    scanf("%d %d %d", &a, &b, &c);

    sum = a+b+c;

    if (sum ==180)
    {
        printf("This is a valid Triangle");
    }
    else printf("This is not a valid Triangle");
    


    return 0;
}