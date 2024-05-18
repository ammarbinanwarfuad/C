#include <stdio.h>

int main(){
    char digit;

    printf("Enter your Character - ");
    scanf("%c", &digit);

    switch (digit)
    {
/*     case 'A':
        printf("This is a Vowel\n");
        break;
    case 'E':
        printf("This is a Vowel\n");
        break;
    case 'I':
        printf("This is a Vowel\n");
        break;
    case 'O':
        printf("This is a Vowel\n");
        break;
    case 'U':
        printf("This is a Vowel\n");
        break;
    case 'a':
        printf("This is a Vowel\n");
        break;
    case 'e':
        printf("This is a Vowel\n");
        break;
    case 'i':
        printf("This is a Vowel\n");
        break;
    case 'o':
        printf("This is a Vowel\n");
        break;
    case 'u':
        printf("This is a Vowel\n");
        break; */

    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    printf("This is a Vowel\n");
        break;



    default: printf("This is Consonant");
        break;
    }


    return 0;
}