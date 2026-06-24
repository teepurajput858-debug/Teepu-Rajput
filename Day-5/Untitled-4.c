#include <stdio.h>

// Function to find the largest prime factor
long long get_largest_prime_factor(long long n) {
    long long max_prime = -1;

    // Remove all even factors (divisible by 2)
    while (n % 2 == 0) {
        max_prime = 2;
        n /= 2;
    }

    // Check for odd factors up to the square root of n
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            max_prime = i;
            n /= i;
        }
    }

    // If the remaining n is greater than 2, it must be prime
    if (n > 2) {
        max_prime = n;
    }

    return max_prime;
}

int main() {
    long long number;

    printf("Enter a positive integer: ");
    if (scanf("%lld", &number) != 1 || number <= 1) {
        printf("Please enter a valid integer greater than 1.\n");
        return 1;
    }

    long long result = get_largest_prime_factor(number);
    printf("The largest prime factor of %lld is: %lld\n", number, result);

    return 0;
}
