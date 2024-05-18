#include <stdio.h>
int main(){

    int a,b,c,sum;
    float avg;
    printf("Enter Three numbers \n");
    scanf("%d%d%d",&a,&b,&c);

    sum = a+b+c;

    avg = (float) sum / 3; //typecasting - mainly i changed the data types here.

    printf("Sum of three numbers is %d\n", sum);
    printf("Average of three numbers is %f\n", avg);
    


    return 0;
}