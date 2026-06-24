#include <stdio.h>

// Function to print Fibonacci sequence up to n terms
void printFibonacciIterative(int n) {
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return;
    }

    long long first = 0, second = 1, next;

    printf("Fibonacci Sequence: ");

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%lld ", next);
    }
    printf("\n");
}

int main() {
    int terms;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    printFibonacciIterative(terms);

    return 0;
}
