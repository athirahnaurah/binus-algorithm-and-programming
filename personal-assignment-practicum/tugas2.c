#include <stdio.h>

/*
    Tugas Praktikum 1 - Soal 2
    NIM : 2802676972
    Nama : Athirah Naurah Firdaus
*/

int main(){
    // initialize variable
    int studentsScore[5];
    int *pointer = studentsScore;
    int sumOfScore = 0;
    int highestScore, lowestScore;
    float average;

    // input score of student and store it to array studentsScore using pointer
    for(int i = 1; i <= 5; i++){
        printf("Enter the score of student %d: ", i);
        scanf("%d", pointer+i-1);
    }


    // initialize highest score and lowest score with value in first index of studentsScore array
    highestScore = *pointer;
    lowestScore = *pointer;

    // find the highest, lowest grade, and total grade
    for(int i=0; i < 5; i++){
        sumOfScore += *(pointer + i); // calculate score students total, access each score using pointer 

        if(*(pointer + i) > highestScore){ // If the value pointed to by the pointer is greater than the current highest score, update the highest score with that value
            highestScore = *(pointer + i);
        }else if(*(pointer + i) < lowestScore){ // If the value pointed to by the pointer is less than the current lowest score, update the lowest score with that value
            lowestScore = *(pointer + i);
        }
    }

     // calculate average and casting to float data type for handle decimal number
    average = (float) sumOfScore / 5;

    //Output
    printf("\nThe Highest Score: %d\n", highestScore); // using format specifier %d for print highest score / output integer
    printf("The Lowest Score: %d\n", lowestScore); // using format specifier %d for print lowest score / output integer
    printf("The Average Score: %.2f\n", average); // using format specifier %.2f for print average / output decimal with 2 digit after comma

    return 0;
}