#include <stdio.h>

// Function to calculate the factorial of a digit
long long getFactorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int number, originalNumber, remainder;
    long long sum = 0;

    // User input
    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Copy original number to preserve its value
    originalNumber = number;

    // Handle negative numbers (optional logic calibration)
    if (number < 0) {
        printf("%d is not a strong number.\n", number);
        return 0;
    }

    // Loop to extract digits and sum their factorials
    while (number > 0) {
        remainder = number % 10;          // Extract the last digit
        sum += getFactorial(remainder);   // Add its factorial to sum
        number /= 10;                    // Remove the last digit
    }

    // Verify if sum matches the original number
    if (sum == originalNumber && originalNumber != 0) {
        printf("%d is a Strong Number.\n", originalNumber);
    } else {
        printf("%d is NOT a Strong Number.\n", originalNumber);
    }

    return 0;
}
