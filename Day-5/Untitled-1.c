#include <stdio.h>

int main() {
    int num, i;
    int sum = 0;

    // Ask user for input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Find and add up all proper divisors
    // A number cannot have a proper divisor greater than its half
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i; // Add divisor to sum
        }
    }

    // Check if the sum of divisors matches the original number
    if (sum == num && num > 0) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is NOT a perfect number.\n", num);
    }

    return 0;
}
