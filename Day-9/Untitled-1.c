#include <stdio.h>

int main() {
    int i, j, rows = 5;

    // Outer loop handles the number of rows (counting down from 5 to 1)
    for (i = rows; i >= 1; i--) {
        
        // Inner loop prints 'i' number of stars in the current row
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        
        // Move to the next line after printing all stars in the row
        printf("\n");
    }

    return 0;
}
