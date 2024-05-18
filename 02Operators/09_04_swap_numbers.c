#include <stdio.h>
int main(){
    int a,b,temp;
    printf("Enter Two Numbers \n");
    scanf("%d%d",&a,&b);

    printf("By Temp Variables\n");
    temp = a;
    a =b;
    b = temp;
    printf("So after swapping A is  %d\n", a);
    printf("So after swapping B is  %d\n", b);




    printf("Without Temp Variables\n");
    a = a-b;
    b= a+b;
    a =b-a;

    printf("So after swapping A is  %d\n", a);
    printf("So after swapping B is  %d\n", b);


    return 0;
}