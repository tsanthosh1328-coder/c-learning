#include <stdio.h>
#include <string.h>

int main() {

    int age = 0;
    float GPA = 0.0;
    char name[20] = "";
    char grade = '\0';

    printf("Enter your age : ");
    scanf("%d", &age);

    printf("Enter your GPA : ");
    scanf("%f", &GPA);

    printf("Enter your grade : ");
    scanf(" %c", &grade);

    printf("Enter your name : ");
    getchar();
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0'; 

    printf(" \n");
    printf(" ---- Student Profile ---- \n");
    printf("Name  :  %s\n", name);
    printf("Age   :  %d\n", age);
    printf("GPA   :  %.1f\n", GPA);
    printf("Grade :  %c\n", grade);

    return 0;
}