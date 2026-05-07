// arithmetic operations
#include <stdio.h>

int main () {

    int x = 15;
    int y = 4;

    printf("%d\n", x + y);
    printf("%d\n", x - y);
    printf("%d\n", x * y);
    printf("%d\n", x / y);
    printf("%d\n", x % y);
    printf("%.2f\n", (float)x / y);

    
    printf("%d\n", x++); // This prints x and not x++ because x++ is a post operation. 
    printf("%d\n", x+= 10); // Even though the modification is done inside the printf statement, the original value of x is modified.
    return 0;

};
