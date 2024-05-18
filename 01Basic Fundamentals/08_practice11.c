//Write a C program to find power of any number x ^ y.

#include <stdio.h>
int main(){
    float x,y,a,ans=1;

    printf("Enter base number ");
    printf("Enter power number ");
    scanf("%f%f",&x,&y);

    if(x==0 && y==0){printf("The value is = 1");}
    else if(y==0){printf("The value is = 1");}
    else if(x==0){printf("The value is = 0");}
    else{
        for(a=1;a<=y;a++){
        ans = ans*x;}
    printf("So the final answer will be %f\n", ans);}


    /*With functions "pow" its too easy
    Just need to add header file #include <math.h>
    and then 
    power = pow(base, expo); //Calculates base^expo */
    


    return 0;
}