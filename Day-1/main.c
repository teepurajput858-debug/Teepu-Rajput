
#include <stdio.h>

int main() {
    int n, sum;

    // Prompt user for input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Guard condition for valid natural numbers
    if (n < 1) {
        printf("Please enter a valid natural number (starting from 1).\n");
        return 1;
    }

    // Direct O(1) formula calculation
    sum = n * (n + 1) / 2;

    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
