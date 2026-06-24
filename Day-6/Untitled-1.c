#include <stdio.h>

int main() {
    int decimalNumber;
    int binaryArray[32];
    int index = 0;

    // Prompt the user for input
    printf("Enter a decimal number: ");
    if (scanf("%d", &decimalNumber) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Handle the edge case where the input is 0
    if (decimalNumber == 0) {
        printf("Binary equivalent: 0\n");
        return 0;
    }

    // Handle negative numbers or inform the user
    if (decimalNumber < 0) {
        printf("This basic program supports non-negative integers only.\n");
        return 1;
    }

    // Step-by-step division by 2
    while (decimalNumber > 0) {
        binaryArray[index] = decimalNumber % 2; // Store remainder (0 or 1)
        decimalNumber = decimalNumber / 2;      // Update the quotient
        index++;                                // Move to next array index
    }

    // Display the binary array in reverse order
    printf("Binary equivalent: ");
    for (int j = index - 1; j >= 0; j--) {
        printf("%d", binaryArray[j]);
    }
    printf("\n");

    return 0;
}
