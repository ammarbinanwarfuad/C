#include <stdio.h>
int main(){
    int i=1;

print: //this is a label. identify it with the colon sign.
    printf("%d\t",i);
    i++;
    if (i<5)
    {
        goto print; //label is calling here 
    }


    /*
    structure of goto statements
    goto label;
    label: statements;
    
    */
    





    return 0;
}