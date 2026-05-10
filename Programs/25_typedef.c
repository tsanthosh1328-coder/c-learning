#include <stdio.h>
#include <string.h>
typedef char string[50];
typedef char initials[4];

int main() {
    string name = "";
    initials init = "";
    int age = 0;
    char city[20] = "";
    int score = 0;

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    name [strlen(name) - 1] = '\0';
    printf("Enter initials: ");
    fgets(init, sizeof(init), stdin);
    init [strlen(init) - 1] = '\0';
    printf("Enter age: ");
    scanf("%d", &age);
    getchar();
    printf("Enter city: ");
    fgets(city, sizeof(city), stdin);
    city [strlen(city) - 1] = '\0'; 
    printf("Enter score: ");
    scanf("%d", &score);
    char *grade = (score >= 90) ? "A" :
                  (score >= 80) ? "B" :
                  (score >= 70) ? "C" :
                  (score >= 60) ? "D" : "F";

    printf("\n");
    printf("--- Student Profile ---\n");
    printf("Name : %s (%s)\n", name, init);
    printf("Age  : %d\n", age);
    printf("City : %s\n", city);
    printf("Score: %d\n", score);
    printf("Grade: %s\n", grade);

    return 0;
}