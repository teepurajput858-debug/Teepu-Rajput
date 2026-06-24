#include <stdio.h>
#include <math.h>

int main() {
    int start, end, i, temp, remainder, digits, sum;

    // Get the range boundaries from the user
    printf("Enter lower limit of the range: ");
    scanf("%d", &start);
    printf("Enter upper limit of the range: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    // Loop through each number in the specified range
    for (i = start; i <= end; i++) {
        // Handle negative numbers or 0 safely
        if (i <= 0) {
            if (i == 0) {
                printf("0 ");
            }
            continue;
        }

        sum = 0;
        digits = 0;

        // Step 1: Count the number of digits
        temp = i;
        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        // Step 2: Calculate the sum of power of individual digits
        temp = i;
        while (temp != 0) {
            remainder = temp % 10;
            // Use round() to avoid floating-point precision loss with pow()
            sum += round(pow(remainder, digits));
            temp /= 10;
        }

        // Step 3: Check if the sum equals the original number
        if (i == sum) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
