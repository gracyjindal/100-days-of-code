#include <stdio.h>

int main() {
    float percentage;
    char grade;

    printf("Enter percentage (0-100): ");
    scanf("%f", &percentage);

    if (percentage >= 90 && percentage <= 100) {
        grade = 'A';
    } 
    else if (percentage >= 80 && percentage < 90) {
        grade = 'B';
    } 
    else if (percentage >= 70 && percentage < 80) {
        grade = 'C';
    } 
    else if (percentage >= 60 && percentage < 70) {
        grade = 'D';
    } 
    else if (percentage >= 0 && percentage < 60) {
        grade = 'F';
    } 
    else {
        printf("Invalid percentage!\n");
        return 0;
    }

    printf("Grade = %c\n", grade);

    return 0;
}

