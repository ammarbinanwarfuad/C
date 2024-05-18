#include <stdio.h>
int main() {
    int number, number1, number2, number3;
    
    //single input
    printf("Enter any Number: ");
    scanf ("%d", &number);
    printf("Your Given number is %d\n", number);

    //Double input
    printf("Enter all 3 Number: ");
    scanf ("%d%d%d", &number1,&number2,&number3);
    printf("Your Given number is %d %d %d", number1,number2,number3);

    return 0;
}