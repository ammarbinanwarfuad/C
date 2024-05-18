#include <stdio.h>
int main(){

    int GCD, LCM, num1,num2, rem,n1,n2;


    printf("Enter first Number - ");
    scanf("%d",&num1);
    printf("Enter Second Number - ");
    scanf("%d",&num2);

    n1=num1;
    n2=num2;

    while (n2!=0)
    {
        rem = n1%n2;
        n1=n2;
        n2=rem;
    }
    
    GCD =n1;
    LCM = (num1*num2)/GCD;

    printf("GCD is %d\n",n1);
    printf("LCM is %d\n",LCM);


    return 0;
}