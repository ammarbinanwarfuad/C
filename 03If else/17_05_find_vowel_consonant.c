//find vowel consonant

#include <stdio.h>
int main (){
    char a;
    
    printf("Enter a character - ");
    scanf("%c",&a);

    if (a =='a' || a =='e' || a =='i' || a=='o' || a=='u'|| a =='A' || a =='E' || a =='I' || a=='O' || a=='U')
    {
        printf("Your character is Vowel");
    }
    else
    printf("Your character is Consonant");
    

    return 0;
}