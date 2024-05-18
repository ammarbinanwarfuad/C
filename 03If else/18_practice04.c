//C program to count total number of money notes in given amount

#include <stdio.h>

int main(){
    int amount, remainder;

    int note1000, note500, note200, note100, note50, note20, note10, note5, note2, note1;

    printf("Enter Your Amount ");
    scanf("%d",&amount);

    note1000 = note500 = note200 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0;

/*     if      (amount>=1000)   {note1000 = amount / 1000; amount = amount - (note1000 * 1000);}
     if (amount>=500)    {note500 = amount /500; amount = amount - (note500 * 500);}
     if (amount>=200)    {note200 = amount /200; amount = amount - (note200 * 200);}
     if (amount>=100)    {note100 = amount /100; amount = amount - (note100 * 100);}
     if (amount>=50)     {note50 = amount /50; amount = amount - (note50 * 50);}
    if (amount>=20)     {note20 = amount /20; amount = amount - (note20 * 20);}
    if (amount>=10)     {note10 = amount /10; amount = amount - (note10 * 10);}
     if (amount>=5)      {note5 = amount /5; amount = amount - (note5 * 5);}
    if (amount>=2)      {note2 = amount /2; amount = amount - (note2 * 2);}
     if (amount>=1)      {note1 = amount /1; amount = amount - (note1 * 1);} */

/*     if      (amount>=1000)   {note1000 = amount / 1000; amount -= (note1000 * 1000);}
    if (amount>=500)    {note500 = amount /500; amount -= (note500 * 500);}
    if (amount>=200)    {note200 = amount /200; amount -= (note200 * 200);}
    if (amount>=100)    {note100 = amount /100; amount -= (note100 * 100);}
    if (amount>=50)     {note50 = amount /50; amount -= (note50 * 50);}
    if (amount>=20)     {note20 = amount /20; amount -= (note20 * 20);}
    if (amount>=10)     {note10 = amount /10; amount -= (note10 * 10);}
    if (amount>=5)      {note5 = amount /5; amount -= (note5 * 5);}
    if (amount>=2)      {note2 = amount /2; amount -= (note2 * 2);}
    if (amount>=1)      {note1 = amount;} */

    //By using remainder
    if (amount>=1000){note1000 = amount / 1000;remainder = amount % 1000;}
    if (remainder>=500 || amount>=500){note500 = remainder / 500;remainder = remainder%500;}
    if(remainder>=200 || amount>=200){note200 = remainder / 200;remainder = remainder%200;}
    if (remainder>=100 || amount>=100){note100 = remainder/100;remainder=remainder%100;}
    if (remainder>=50 || amount>=50){note50 = remainder/50;remainder=remainder%50;}
    if (remainder>=20 || amount>=20){note20 = remainder/20;remainder=remainder%20;}
    if (remainder>=10 || amount>=10){note10 = remainder/10;remainder=remainder%10;}
    if (remainder>=5 || amount>=5){note5 = remainder/5;remainder=remainder%5;}
    if (remainder>=2 || amount>=2){note2 = remainder/2;remainder=remainder%2;}
    ////if (remainder>=1 || amount>=1){note1 = remainder;}
    if (remainder==1 || amount==1){note1 = remainder;}
    
    printf("\nNumber of 1000 Notes = %d", note1000);
    printf("\nNumber of 500 Notes = %d", note500);
    printf("\nNumber of 200 Notes = %d", note200);
    printf("\nNumber of 100 Notes = %d", note100);
    printf("\nNumber of 50 Notes = %d", note50);
    printf("\nNumber of 20 Notes = %d", note20);
    printf("\nNumber of 10 Notes = %d", note10);
    printf("\nNumber of 5 Notes = %d", note5);
    printf("\nNumber of 2 Notes = %d", note2);
    printf("\nNumber of 1 Notes = %d", note1);
    
    

    


    return 0;
}