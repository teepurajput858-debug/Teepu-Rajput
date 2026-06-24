#include <stdio.h>

int main() {
    int rows = 5; // Total number of rows to print

    // Outer loop handles the number of rows
    for (int i = 1; i <= rows; i++) {
        
        // Inner loop handles the characters printed in each row
        for (int j = 1; j <= i; j++) {
            // Calculate and print the character starting from 'A'
            printf("%c", 'A' + j - 1);
        }
        
        // Move to the next line after completing a row
        printf("\n");
    }

    return 0;
}
