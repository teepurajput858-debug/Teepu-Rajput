#include <stdio.h>

// Function declaration
unsigned long long findFactorial(int n);

int main() {
    int number;
    
    printf("Enter a positive integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Factorials do not exist for negative numbers
    if (number < 0) {
        printf("Error: Factorial of a negative number does not exist.\n");
    } else if (number > 20) {
        printf("Error: Result too large to fit in a standard 64-bit integer (Max input is 20).\n");
    } else {
        unsigned long long result = findFactorial(number);
        printf("Factorial of %d = %llu\n", number, result);
    }

    return 0;
}

// Function definition to calculate factorial iteratively
unsigned long long findFactorial(int n) {
    unsigned long long fact = 1;
    
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    
    return fact;
}
