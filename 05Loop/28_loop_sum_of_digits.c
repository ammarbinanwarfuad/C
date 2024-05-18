/* #include <stdio.h>

int main(){
    int number, rem, sum=0, temp;
    printf("Enter the Number - ");
    scanf("%d",&number);

    temp = number;

    while (temp!=0) // condition , no initialization
    {
        rem = temp%10; //calculation
        sum =sum+rem; //calculation
        temp = temp/10; // increment + decrement
    }

    
    
    printf("Sum of Digits = %d\n", sum);



    return 0;
} */

#include <stdio.h>

int main() {
  int number, rem, sum = 0;
  
  printf("Enter the Number: ");
  scanf("%d", &number);
  
  int temp = number; //234
  
  for(; temp != 0; temp = temp/10) { // no initialization, condition (temp!=0)
    rem = temp % 10; // 
    sum += rem;  
  }
  
  printf("Sum of Digits = %d\n", sum);
  
  return 0;
}