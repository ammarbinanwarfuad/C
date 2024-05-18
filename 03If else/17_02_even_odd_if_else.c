//find even odd using if else

#include <stdio.h>

int main(){

    int a;
    printf("Enter your number - ");
    scanf("%d",&a);


    if(a%2==0)
    printf("A is Even\n");
    if (a%2!=0)
    {
        printf("A is Odd\n");
    }
    

    return 0;
}