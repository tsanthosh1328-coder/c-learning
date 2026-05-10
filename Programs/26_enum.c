#include <stdio.h>
typedef enum {
    RED = 1, YELLOW, GREEN
} light ;

void printLight(light l) {
    switch (l) {
        case RED:
            printf("Stop!\n");
            break;
        case YELLOW:
            printf("Slow down!\n");
            break;
        case GREEN:
            printf("Go!\n");
            break;
        
    }
}

int main() {
    
    printf("Enter light (RED = 1, YELLOW = 2, GREEN = 3): ");
    int choice;
    scanf("%d", &choice);

    switch(choice) {
        case RED:
            printf("RED light -- ");
            printLight(RED);
            break;
        case YELLOW:
            printf("YELLOW light -- ");
            printLight(YELLOW);
            break;
        case GREEN:
            printf("GREEN light -- ");
            printLight(GREEN);
            break;
        default:
            printf("Invalid light!\n");
    }
    return 0;
}