#include <stdio.h>
int main(){
    int num;
    //Decimal to Octal
    printf("Enter any decimal number ");
    scanf("%d", &num);
    fflush(stdin);
    printf("So the octal number is %o\n", num);

    //Octal to Decimal
    printf("Enter any octal number ");
    scanf("%o", &num);
    fflush(stdin);
    printf("So the Decimal number is %d\n", num);

    return 0;
}