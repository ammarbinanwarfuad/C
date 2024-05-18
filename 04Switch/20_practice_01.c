//Write a C program to find maximum between two numbers using switch case.

#include <stdio.h>
int main(){
    
    int num1,num2;
    int compare;

    printf("Enter Two numbers - ");
    scanf("%d%d",&num1, &num2);

    /* // The expression num1 > num2 evaluates to either 1 (true) or 0 (false), which the switch uses to direct program flow.{
    //switch (num1>num2) -- 20_practice_01.c:11:5: warning: switch condition has boolean value [-Wswitch-bool]



    switch ((int)(num1 > num2)) { 
    //By casting to int, you force the boolean true/false value to become 0/1 instead. This makes the switch happy and gets rid of the warning.
        case 0:
        printf("%d is maximum", num2);
            break;
        
        case 1:
        printf("%d is Maximum", num1);
            break;

        default: 
        printf("Numbers are equal");
            break;
    } //  the issue is now when the numbers are equal. With the cast to int, we are forcing a 0 or 1 value even when num1 == num2.

 */
    
    //I can still get the desired behavior using switch case here. The key is using an additional variable to hold the result of the comparison, instead of evaluating the comparison directly in the switch condition.

   /*  compare = (num1>num2);
    switch (compare)
    {
    case 0:
        printf("%d is maximum", num2);
        break;
        
    case 1:
        printf("%d is Maximum", num1);
        break;

    default: 
        printf("Numbers are equal");
        break;
    } */
    
    compare = (num1 > num2 || num1 == num2);

/* switch (compare) {
    case 1: 
        printf("%d is maximum", num1);
        break; 

    case 0:
        printf("%d is maximum", num2);
        break;
    
    default: // executes only when num1 == num2
        printf("Numbers are equal");
    }    */
    

  if(num1 > num2) {
    compare = 1;
  }
  else if (num1 < num2) {
    compare = -1; 
  }
  else {
    compare = 0;
  }

  switch(compare) {
    case 1:
      printf("%d is maximum\n", num1);
      break;

    case -1: 
      printf("%d is maximum\n", num2);
      break;
    
    case 0:
      printf("Numbers are equal\n");
      break;
  }

  return 0;  
}