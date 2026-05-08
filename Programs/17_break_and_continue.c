#include <stdio.h>

int main() {
    
    for (int i = 1; i < 21; i++) {

        if (i % 4 == 0) {
            continue;
        }

        if (i > 15) {
            break;
        }

        printf("%d\n", i);
    }
}