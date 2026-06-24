#include <stdio.h>

int main() {
    int rows = 5; // Total number of rows for the pyramid

    // Outer loop handles the number of rows
    for (int i = 1; i <= rows; i++) {
        
        // First inner loop prints the leading spaces for alignment
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Second inner loop prints the stars (2 * i - 1 formula)
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }

        // Move to the next line after completing a row
        printf("\n");
    }

    return 0;
}
