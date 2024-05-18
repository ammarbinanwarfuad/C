    /* Bitwise Operators
    &: Bitwise AND
    |: Bitwise OR
    ^: Bitwise XOR
    ~: Bitwise NOT
    <<: Bitwise left shift
    >>: Bitwise right shift
    
    */

#include <stdio.h>
int main(){

    int a=32; // binary a = 00100000
    int b=12; // binary b = 00001100
    int c;

    c= a&b; // multiplication of binary numbers c=00000000 and then reverse it to decimal. output c = 0.
    printf("a&b =%d\n",c);

    c= a|b; // summation of binary numbers c = 00101100 and then reverse it to decimal. output c = 44.
    printf("a&b =%d\n",c);

    c= a^b; // (same input = output 0) c = 00101100 and then reverse it to decimal. output c = 44.
    printf("a&b =%d\n",c);
    return 0;
}