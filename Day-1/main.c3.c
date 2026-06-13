#include <stdio.h>

int main() {
    long long num;
    int count = 0;

    // Ask the user for input
    printf("Enter an integer: ");
    scanf("%lld", &num);

    // Store original number for final print
    long long temp = num;

    // Use a do-while loop to handle the edge case where the number is 0
    do {
        count++;
        num /= 10; // Remove the last digit
    } while (num != 0);

    printf("The number %lld has %d digits.\n", temp, count);

    return 0;
}
