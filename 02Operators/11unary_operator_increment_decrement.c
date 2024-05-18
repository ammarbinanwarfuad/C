#include <stdio.h>
int main(){

        int x=10;

        printf("X = %d\n",x++); //x=10
        printf("X = %d\n",x); //x =11
        printf("X = %d\n",++x); //x=12
        printf("X = %d\n",--x); //x=11
        printf("X = %d\n",x--); //x=11
        printf("X = %d\n",x); //x= 10
        printf("X = %d\n",++x); //x=11
        printf("X = %d\n",x--); //x=11


    return 0;
}