/*
    Here is an overview of loops in C language:

#for loop
The for loop executes a block of code a specific number of times. The syntax is:
                
                for (initialization; condition; update) {
                // code to be executed
                }

#while loop
The while loop executes a block of code as long as a condition is true. The syntax is:
                
                while (condition) {
                // code to be executed
                }

#do while loop
The do while loop is similar to the while loop except that it first executes the code block and then checks the condition. This means the code block will always execute at least once. The syntax is:
                
                do {
                // code to be executed 
                } while (condition);


*/

#include <stdio.h>
int main(){


//for loop
for (int i = 0; i < 10; i++) {
  printf("%d\n", i); 
}

//while loop
int n = 0;
while (n < 10) {
  printf("%d\n", n);
  n++;
}

//do while loop

int m = 0;
do {
  printf("%d\n", m);
  m++;  
} while(m < 10);

    return 0;
}