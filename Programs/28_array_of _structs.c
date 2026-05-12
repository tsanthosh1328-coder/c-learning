#include <stdio.h>

typedef struct{
    char name[30];
    int score;
    char grade;
}student;

void printStudent(student s);

int main(){

    student students[] = {
        {"Alice", 92, 'A'},
        {"Bob", 78, 'C'},
        {"Charlie", 85, 'B'},
        {"Diana", 95, 'A'},
    };

    for(int i = 0; i < 4; i++){
        printStudent(students[i]);
    }

    return 0;
}

void printStudent(student s){
    printf("Name: %.-10s, Score: %d, Grade: %c\n", s.name, s.score, s.grade);
}