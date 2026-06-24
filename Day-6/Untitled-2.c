#include <stdio.h>

int main() {
    long long binary;
    long long decimal = 0;
    long long base = 1; // Represents 2^0 initially
    long long temp;

    // Prompt user for input
    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    temp = binary;

    // Conversion logic
    while (temp > 0) {
        int last_digit = temp % 10; // Extract the rightmost digit
        decimal += last_digit * base; // Add the positional value to decimal
        base *= 2;                  // Move to the next power of 2 (2^1, 2^2, etc.)
        temp /= 10;                 // Remove the rightmost digit
    }

    // Output the result
    printf("%lld in binary = %lld in decimal\n", binary, decimal);

    return 0;
}
