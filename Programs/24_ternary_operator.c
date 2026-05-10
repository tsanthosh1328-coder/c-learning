#include <stdio.h>

int main() {
    
    int hours = 0;
    int minutes = 0;

    printf("Enter hours: ");
    scanf("%d", &hours);
    printf("Enter minutes: ");
    scanf("%d", &minutes);

    char *period = (hours >= 12) ? "PM" : "AM";
    hours = (hours > 12) ? hours - 12 : hours;
    hours = (hours == 0) ? 12 : hours; 
    printf("Time: %02d:%02d %s\n", hours, minutes, period);
    return 0;
}