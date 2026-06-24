#include <stdio.h>

// Recursive function to find the nth Fibonacci number
int fibonacci(int n) {
    // Base cases: F(0) = 0, F(1) = 1
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    // Recursive case: F(n) = F(n-1) + F(n-2)
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int terms;

    // Ask user for the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    // Validate input
    if (terms <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Fibonacci Series: ");
    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
