#include <stdio.h>

int main() {
    int rows = 5; // Defines the total number of rows (1 to 5)

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop to print numbers from 1 up to the current row number
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Move to the next line after each row is printed
        printf("\n");
    }

    return 0;
}
