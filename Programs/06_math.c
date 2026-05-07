// math
#include <stdio.h>
#include <math.h>

int main () {

    float number = 0;
    printf("Enter a number: ");
    scanf("%f", &number);

    float absnumber = fabs(number);

    printf("\n");
    printf("Square root of absolute value : %.2f\n", sqrt(absnumber));
    printf("Squared : %.2f\n", pow(number, 2));
    printf("Cubed : %.2f\n", pow(number, 3));
    printf("Absolute value : %.2f\n", absnumber);
    printf("Floor : %.2f\n", floor(number));
    printf("Ceiling : %.2f\n", ceil(number));
    
    return 0;
}