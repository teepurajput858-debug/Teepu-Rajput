#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        // 1. Print leading spaces for pyramid alignment
        for (int j = 1; j <= rows - i; j++) {
            printf("  ");
        }

        // 2. Print increasing numbers (1 up to i)
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // 3. Print decreasing numbers (i-1 down to 1)
        for (int j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
