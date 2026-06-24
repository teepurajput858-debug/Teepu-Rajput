#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int n) {
    // 1 and numbers less than 1 are not prime
    if (n <= 1) {
        return false;
    }
    
    // 2 and 3 are prime numbers
    if (n <= 3) {
        return true;
    }
    
    // Eliminate even numbers and multiples of 3
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    
    // Check divisors from 5 up to the square root of n
    // We increment by 6 to skip even numbers and multiples of 3 (6k +/- 1 rule)
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int num;
    
    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    
    // Call the function and print the result
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    
    return 0;
}
