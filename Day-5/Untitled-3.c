#include <stdio.h>

int main() {
    int number;

    // Prompt the user to enter a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Validate the input to ensure it is positive
    if (number <= 0) {
        printf("Error: Please enter a number greater than 0.\n");
        return 1; 
    }

    printf("Factors of %d are: ", number);

    // Loop from 1 to the given number
    for (int i = 1; i <= number; i++) {
        // If the number is perfectly divisible by i, then i is a factor
        if (number % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
