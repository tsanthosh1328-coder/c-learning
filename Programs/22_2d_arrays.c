#include <stdio.h>

int main() {

    int scores[][3] = {
        {85, 90, 78},
        {92, 88, 95},
        {70, 75, 80}
    };

    printf("Score Sheet:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Student Averages:\n");
    for (int i = 0; i < 3; i++) {
        float sum = 0;
        for (int j = 0; j < 3; j++) {
            sum += scores[i][j];
        }
        printf("Student %d: %.2f\n", i + 1, sum / 3.0);
    }
    printf("\n");
    printf("Subject Averages:\n");
    for (int j = 0; j < 3; j++) {
        float sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += scores[i][j];
        }
        printf("Subject %d: %.2f\n", j + 1, sum / 3.0);
    }

    return 0;
}