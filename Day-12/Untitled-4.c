#include <stdio.h>
#include <stdbool.h>

// Function declaration
bool isPerfectNumber(int num);

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Call the function and print the result
    if (isPerfectNumber(number)) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}

/**
 * Function: isPerfectNumber
 * Purpose: Checks if a given number is a perfect number.
 * Returns: true if perfect, false otherwise.
 */
bool isPerfectNumber(int num) {
    // Perfect numbers must be greater than 0
    if (num <= 0) {
        return false;
    }

    int sum = 0;

    // Loop up to num / 2 since no proper divisor can exceed half the number
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i; // Add divisor to the sum
        }
    }

    // Return true if the sum of divisors matches the original number
    return sum == num;
}
