#include <stdio.h>

int main() {
    int rows = 5; // Set to 5 for the 12345 to 1 pattern

    // Outer loop runs from 5 down to 1
    for (int i = rows; i >= 1; i--) {
        // Inner loop prints numbers from 1 to the current value of i
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Move to the next line after each row is printed
        printf("\n");
    }

    return 0;
}
