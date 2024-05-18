#include <stdio.h>
int main() {
    //lowercase to uppercase without any library function
    char lower;
    printf("without any library funtion \n");
    printf("Enter any lowercase letter ");
    scanf("%c", &lower);
    fflush(stdin);
    printf("The uppercase letter is %c \n", lower-32);

    //uppercase to lowercase without any library function
    char upper;
    printf("Enter any uppercase letter ");
    scanf("%c", &upper);
    fflush(stdin);
    printf("The lowercase letter is %c \n", upper+32);


    printf("with library funtion\n");
    //lowercase to uppercase with library function

    printf("Enter any lowercase letter ");
    scanf("%c", &lower);
    fflush(stdin);
    upper = toupper(lower);
    printf("Uppercase letter is %c\n", upper);
    
    //uppercase to lowercase with library function
    printf("Enter any uppercase letter ");
    scanf("%c", &upper);
    fflush(stdin);
    lower = tolower(upper);
    printf("Lowecase letter is %c ", lower);

    return 0;
}