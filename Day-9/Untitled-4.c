#include <stdio.h>

int main() {
    int size, i, j;

    // Get the size of the square from the user
    printf("Enter the side length of the square: ");
    scanf("%d", &size);

    // Outer loop for rows
    for (i = 1; i <= size; i++) {
        // Inner loop for columns
        for (j = 1; j <= size; j++) {
            // Print star only at the boundaries
            if (i == 1 || i == size || j == 1 || j == size) {
                printf("*");
            } else {
                // Print space for the hollow interior
                printf(" ");
            }
        }
        // Move to the next line after completing a row
        printf("\n");
    }

    return 0;
}
