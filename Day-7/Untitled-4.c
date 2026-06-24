#include <stdio.h>

// Recursive function to reverse a number
// 'num' is the remaining number, 'reversed' accumulates the result
int reverseNumberRecursive(int num, int reversed) {
    // Base Case: when the remaining number becomes 0, return the accumulated result
    if (num == 0) {
        return reversed;
    }
    
    // Recursive Case: extract the last digit and build the reversed number
    int lastDigit = num % 10;
    reversed = (reversed * 10) + lastDigit;
    
    // Pass the reduced number and updated accumulator to the next call
    return reverseNumberRecursive(num / 10, reversed);
}

int main() {
    int inputNumber, outputNumber;

    // Prompt the user for an integer input
    printf("Enter an integer to reverse: ");
    if (scanf("%d", &inputNumber) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    // Call the recursive function starting with 0 as the initial reversed value
    outputNumber = reverseNumberRecursive(inputNumber, 0);

    // Display the final output
    printf("Reversed Number: %d\n", outputNumber);

    return 0;
}
