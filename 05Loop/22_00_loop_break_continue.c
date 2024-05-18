#include <stdio.h>
int main(){
    int i;

    for (i = 0; i <=10; i++)
    {
        if (i%3==0)
        {
            continue; //go back to loop
        }
        printf("%d\n", i);


        if (i==10)
        {
           break; // stop loop 
        }
        
        
    }
    /* output
    1,2,4,5,7,8,10
    
    */




    return 0;
}