#include <stdio.h>
int main(){
    int i,n,m;

    for ( i = 0; i <=10; i=i+2) // i = i+2 for increasing +2 at a time === 2, (+2)=4, (+2)=6 ,.....
    {
        printf("%d\n",i);
    }

    printf("\n");
    printf("\n");
    printf("\n");

    n=0;
    while (n<=10)
    {   
        printf("%d\n",n);
        n+= 2;
    }
    printf("\n");
    printf("\n");
    printf("\n");

    m=0;
    do
    {
        printf("%d\n",m);
        m = m+2;
    } while (m<=10);
    
    
    



    return 0;
}