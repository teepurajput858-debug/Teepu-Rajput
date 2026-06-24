#include <stdio.h>

// Function declaration
int sumOfDigits(int num);

int main() {
    int number, result;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Handle negative numbers by converting to positive
    if (number < 0) {
        number = -number;
    }

    // Call the recursive function
    result = sumOfDigits(number);

    printf("Sum of digits: %d\n", result);

    return 0;
}

// Recursive function to calculate sum of digits
int sumOfDigits(int num) {
    // Base Case: If the number becomes 0, stop recursion
    if (num == 0) {
        return 0;
    }
    
    // Recursive Case: Extract the last digit and add it to the sum of the remaining digits
    return (num % 10) + sumOfDigits(num / 10);
}
