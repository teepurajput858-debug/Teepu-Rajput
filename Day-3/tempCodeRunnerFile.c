#include <stdio.h>

// Function to calculate GCD using Euclidean algorithm
int find_gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2, gcd, lcm;

    // Prompt user for input
    printf("Enter two positive integers: ");
    if (scanf("%d %d", &num1, &num2) != 2 || num1 <= 0 || num2 <= 0) {
        printf("Error: Please enter valid positive integers.\n");
        return 1;
    }

    // Calculate GCD first
    gcd = find_gcd(num1, num2);

    // Calculate LCM using the formula
    lcm = (num1 * num2) / gcd;

    // Display the output
    printf("The LCM of %d and %d is %d.\n", num1, num2, lcm);

    return 0;
}
