#include <stdio.h>

// Function declaration to check if a number is prime
int isPrime(int num);

int main() {
    int lower, upper;

    // Prompt user for the range bounds
    printf("Enter lower bound of the interval: ");
    if (scanf("%d", &lower) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    
    printf("Enter upper bound of the interval: ");
    if (scanf("%d", &upper) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Swap the bounds if the user entered the lower bound greater than upper bound
    if (lower > upper) {
        int temp = lower;
        lower = upper;
        upper = temp;
    }

    printf("Prime numbers between %d and %d are: \n", lower, upper);

    // Loop through the numbers in the specified range
    for (int i = lower; i <= upper; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

// Function definition to check primality
int isPrime(int num) {
    // 0, 1, and negative numbers are not prime
    if (num < 2) {
        return 0; 
    }

    // Loop through numbers to find factors
    // Stopping at i * i <= num is mathematically equivalent to i <= sqrt(num)
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }
    
    return 1; // It is a prime number
}