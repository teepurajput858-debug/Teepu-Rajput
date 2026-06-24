#include <stdio.h>

int main() {
    int n;
    // Using long long to handle larger Fibonacci numbers without overflow
    long long first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }

    printf("Fibonacci Series up to %d terms:\n", n);

    for (int i = 1; i <= n; i++) {
        // Print the current term
        printf("%lld", first);
        
        // Add a comma after elements except the last one
        if (i < n) {
            printf(", ");
        }

        // Compute the next term and update variables
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
    return 0;
}
