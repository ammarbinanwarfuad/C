#include <stdio.h>
int main(){
    int number,i,count,totalPrimeNumbers=0, nonPrimeNumbers=0, sumOfprimeNumbers=0, startingNumber, endingNumber;

    printf("Enter Starting Number - ");
    scanf("%d", &startingNumber);
    printf("Enter Ending Number - ");
    scanf("%d", &endingNumber);


    for (number= startingNumber; number<=endingNumber; number++)
    {
        count=0;

        if (number<=1){count++;}
        
        for (i = 2; i < number-1; i++){
            if (number%i==0){
                count++;
                nonPrimeNumbers++;
                break;}}

        if (count==0){
           printf("%d ", number);
           totalPrimeNumbers++;
           sumOfprimeNumbers = sumOfprimeNumbers + number;
           }
    }
    
    printf("\nTotal Prime numbers %d\n", totalPrimeNumbers);
    printf("\nTotal Non-Prime numbers %d\n", nonPrimeNumbers);
    printf("\nSum of total Prime numbers %d\n", sumOfprimeNumbers);




    return 0;
}