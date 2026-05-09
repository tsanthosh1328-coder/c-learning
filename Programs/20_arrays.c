#include <stdio.h>

int main(){

    int scores[] = {85, 90, 78, 92, 88};
    int total = 0;
    int highest = scores[0];
    int lowest = scores[0];

    for(int i = 0; i < 5; i++){
        total += scores[i];
    }
    float average = (float)total / 5;

    for (int i = 0; i < 5; i++){
        if (scores[i] > highest){
            highest = scores[i];
        }
    }

    for (int i = 0; i < 5; i++){
        if (scores[i] < lowest){
            lowest = scores[i];
        }
    }
    
    printf("Scores: ");
    for (int i = 0; i < 5; i++){
        printf("%d ", scores[i]);
    }
    printf("\n");
    printf("\n");
    printf("Total: %d\n", total);
    printf("Average: %.2f\n", average);
    printf("Highest: %d\n", highest);
    printf("Lowest: %d\n", lowest);

    return 0;
}
