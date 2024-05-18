#include <stdio.h>

int main(){

    int num, count=0;

    printf("Enter The number - ");
    scanf("%d", &num);

    while (num!=0)
    {
        num = num/10;
        count ++;
        //++count; same output
    }
    
    printf("NUmber of digits %d", count);


    return 0;
}