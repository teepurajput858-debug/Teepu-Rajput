#include <stdio.h>

int main() {
    int rows = 5; // Total number of rows for the pyramid
    int i, j;

    for (i = 0; i < rows; i++) {
        // 1. Print leading spaces to center-align the pyramid
        for (j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }

        // 2. Print characters in ascending order (from 'A' up to the peak)
        for (j = 0; j <= i; j++) {
            printf("%c", 'A' + j);
        }

        // 3. Print characters in descending order (from peak - 1 down to 'A')
        for (j = i - 1; j >= 0; j--) {
            printf("%c", 'A' + j);
        }

        // Move to the next line after completing a row
        printf("\n");
    }

    return 0;
}
