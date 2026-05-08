#include <stdio.h>
#include <string.h>

void printHeader(char name[], int grade) {
    printf("====== Report Card ======\n");
    printf("Student Name: %s\n", name);
    printf("Grade: %d\n", grade);
    printf("=========================\n");
}

void printSubject(char subject[], int score) {

    char status[10] = "Pass";
    if (score >= 50 ) {
        strcpy(status, "Pass");
    }
    else {
        strcpy(status, "Fail");
    }

    printf("%-10s  : %d  --  %s\n", subject, score, status);

}

int main() {

    char name[30];
    int grade;
    char subject1[15], subject2[15], subject3[15];
    int score1, score2, score3;

    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0'; 

    printf("Enter grade: ");
    scanf("%d", &grade);
    

    printf("Enter subject 1 : ");
    scanf("%s", &subject1);
    
    printf("Enter score: ");
    scanf("%d", &score1);

    printf("Enter subject 2 : ");
    scanf("%s", &subject2);
    
    printf("Enter score: ");
    scanf("%d", &score2);

    printf("Enter subject 3 : ");
    scanf("%s", &subject3);
    
    printf("Enter score: ");
    scanf("%d", &score3);
    
    printHeader(name, grade);
    printSubject(subject1, score1);
    printSubject(subject2, score2);
    printSubject(subject3, score3);

    return 0;
}