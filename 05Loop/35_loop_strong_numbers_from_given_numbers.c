#include <stdio.h>

int main(){

    int startingNumber,endingNumber,sum=0,temp, i,rem,fact,m;

    printf("Enter your first number - ");
    scanf("%d", &startingNumber); 
    printf("Enter your second number - ");
    scanf("%d", &endingNumber); 

    for (m= startingNumber; m<=endingNumber; m++){
                temp =m;
                sum =0;
            while (temp!=0) 
                    {
                        fact =1;
                        rem = temp%10; 

                        for (i = 1; i<=rem; i++) 
                        {
                            fact = fact * i;
                        }
                        
                        sum = sum + fact;
                        temp = temp/10;}
                    
    if (sum==m){
        printf("%d ", sum);
        }
    }
    







    

    return 0;
}