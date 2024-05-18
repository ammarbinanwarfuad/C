#include <stdio.h>

int main(){

    int num,sum=0,temp, i,rem,fact;

    printf("Enter your number - ");
    scanf("%d", &num); // 145


    temp =num; //145

    while (temp!=0) //145!=0
    {
        fact =1;
        rem = temp%10; // rem = 145%10 = 5 

        for (i = 1; i<=rem; i++) 
        {
            fact = fact * i; // 
        }
        
        sum = sum + fact;
        temp = temp/10;
    }

    if (sum==num){printf("This is a strong number");}
    else {printf("this is not a strong number");}
    
    
    

    return 0;
}