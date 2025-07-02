#include <stdio.h>

/*
    Tugas Praktikum 1 - Soal 1
    NIM : 2802676972
    Nama : Athirah Naurah Firdaus
*/
int main(){
    // initialize variable
    int a, b, c, resultSum, resultDiff, resultProd;
    float average, div;

    // input variable a b and c
    printf("Enter the first integer: ");
    scanf("%d",&a);
    printf("Enter the second integer: ");
    scanf("%d",&b);
    printf("Enter the third integer: ");
    scanf("%d",&c);

    resultSum = a + b + c; // addition operation
    resultDiff = a - b - c; // substraction operation
    resultProd = a * b * c; // multiplication operation
    div =(float) a / b / c; // division operation > cast to float to get decimal
    average =(float) resultSum / 3; // average > cast to float to get decimal


    // Output
    printf("\nAddition \n %d + %d + %d = %d\n",a,b,c,resultSum);
    printf("Substraction \n %d - %d - %d = %d\n",a,b,c,resultDiff);
    printf("Multiplication \n %d * %d * %d = %d\n",a,b,c,resultProd);
    printf("Division \n %d / %d / %d = %f\n\n",a,b,c,div); // using format specifier %f for print div / output decimal
    printf("The average of %d, %d, and %d is %f\n",a,b,c,average); // using format specifier %.2f for print average / output decimal with 2 digit after comma

    return 0;
}