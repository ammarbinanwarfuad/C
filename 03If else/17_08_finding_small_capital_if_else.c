#include <stdio.h>

int main(){
    char let;

    printf("Enter Your Character to check ");
    scanf("%c",&let);

    if (let>='A' && let<='Z'){printf("Your Character is a Capital Letter");}
    else if (let>='a' && let<='z'){printf("Your Character is a Small Letter");}
    else{printf("This is not a letter.");}
    


    return 0;
}