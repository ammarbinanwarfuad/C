//Write a C program to print multiplication table of any number.

#include <stdio.h>

int main(){
    int num,i;
    printf("Enter The number ");
    scanf("%d", &num);

    for (i = 0; i <=10; i++)
    {
        printf("%d * %d = %d\n", num, i, num*i);
    }
    



return 0;
}
