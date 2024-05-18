//Write a C program to perform input/output of all basic data types.

#include <stdio.h>
int main(){
    int i;
    float f;
    double d;
    char c;

    printf("Enter integer number ");
    scanf("%d", &i);
    fflush(stdin);
    printf("Your Integer number is %d\n", i);

    printf("Enter Float number ");
    scanf("%f", &f);
    fflush(stdin);
    printf("Float number is %.2f\n", f);

    printf("\n");

    printf("Enter your double integer ");
    scanf("%lf", &d);
    fflush(stdin);
    printf("Your double integer is %lf\n ", d);

    printf("Enter a character ");
    scanf("%c", &c);
    fflush(stdin);
    printf("Your character is %c\n", c);

    return 0;
}