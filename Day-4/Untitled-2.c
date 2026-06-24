#include <stdio.h>

// Function to find the nth Fibonacci number
unsigned long long get_nth_fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    unsigned long long a = 0; // Represents F(i-2)
    unsigned long long b = 1; // Represents F(i-1)
    unsigned long long c = 0; // Represents F(i)

    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;

    printf("Enter the position (n) to find the Fibonacci term: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Please enter a valid non-negative integer.\n");
        return 1;
    }

    unsigned long long result = get_nth_fibonacci(n);
    printf("The %dth Fibonacci term is: %llu\n", n, result);

    return 0;
}
