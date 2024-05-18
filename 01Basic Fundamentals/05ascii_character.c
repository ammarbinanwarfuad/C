#include <stdio.h>
int main() {

    // Ascii value to character
    int n;
    printf("Enter your aschii value ");
    scanf("%d", &n);
    fflush(stdin); 
    printf("Your Ascii character is %c\n", n);


    //Ascii character to value
    char ch;
    printf("Enter your aschii Character ");
    scanf("%c", &ch);
    fflush(stdin); 
    printf("Your Ascii value is %d\n", ch);

    return 0;
}