#include <stdio.h>

int main() {
    int rows, i, j;

    // Ask user for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop to handle the number of rows
    for (i = rows; i >= 1; i--) {
        
        // Inner loop 1: Prints trailing/leading spaces
        for (j = 0; j < rows - i; j++) {
            printf(" ");
        }

        // Inner loop 2: Prints the stars (2 * i - 1 stars per row)
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        // Move to the next line after completing a row
        printf("\n");
    }

    return 0;
}
