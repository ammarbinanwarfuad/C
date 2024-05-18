#include <stdio.h>

int main(){
    int number1,number2, temp, rem, sum=0,i;

    printf("Enter your first number - ");
    scanf("%d", &number1); //100
    
    printf("Enter your last number - ");
    scanf("%d", &number2); //200

    printf("Armstrong numbers in between %d and %d are - ", number1, number2);
    for (i = number1; i <=number2; i++) 
    {
        temp=i ;
        sum =0; //100
        while (temp!=0) //100!=0 //10!=0 // 1!=0
            {
                rem =temp%10; //rem =100%10 = 0 //rem = 10%10 = 0 // rem = 1%10 =1
                sum = sum +rem*rem*rem; // sum = 0+0 =0 // sum = 0+0 =0 // sum = 0+1 =1
                temp = temp/10; // i  = 10 // i = 1 // // i =0 - loop end 
                }

            if (i==sum)
            {
                printf("%d ", sum);
            }}
    
    printf("\nPalindrome numbers in between %d and %d are - ", number1, number2);
    for (i = number1; i <=number2; i++) 
    {
        temp=i ;
        sum =0;
        while (temp!=0)
            {
                rem =temp%10;
                sum = sum*10 +rem;
                temp = temp/10; }

            if (i==sum)
            {
                printf("%d ", sum);
            }}
    return 0;
}