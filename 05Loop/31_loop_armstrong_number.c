#include <stdio.h>

int main(){
    int number, temp, rem, sum=0;

    printf("Enter your number - ");
    scanf("%d", &number);

    temp = number;

    while (temp!=0)
    {
        rem =temp%10;
        sum = sum+rem*rem*rem;
        temp = temp/10;
    }
    //printf("Reverse number is %d", sum);

    if (number==sum)
    {
        printf("This is a Armstrong number\n");
    }else
    printf("This is not a Armstrong number");
    


    return 0;
}