// if 
#include <stdio.h>

int main() {
    
    int score = 0.0;

    printf("Enter your score : ");
    scanf( "%d" , &score );
    char grade = '/0';

    if (score < 0  || score > 100) {
        printf("Invalid Score");
    }
    else if (score >= 90) {
        grade = 'A';
    }
    else if (score >= 80) {
        grade = 'B';
    }
    else if (score >= 70) {
        grade = 'C';
    }
    else if (score >= 60) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }

    printf("Grade: %c\n", grade);
    if (grade == 'A') {
        printf("Excellent!");
    }
    if (grade == 'B') {
        printf("Good Job!");
    }
    if (grade == 'C') {
        printf("You passed");
    }
    if (grade == 'D') {
        printf("Needs Improvement");
    }
    if (grade == 'F') {
        printf("Failed");
    }

}