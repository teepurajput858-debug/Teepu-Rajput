#include <stdio.h>
#include <math.h>

// Function declaration
int isArmstrong(int num);

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Call function and check the return value
    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}

/**
 * Function to check if a number is an Armstrong number.
 * Returns 1 if true, 0 if false.
 */
int isArmstrong(int num) {
    int temp = num;
    int digits = 0;
    int sum = 0;

    // Step 1: Count the total number of digits
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    // Reset temp to the original number
    temp = num;

    // Step 2: Calculate the sum of power of digits
    while (temp != 0) {
        int remainder = temp % 10;
        
        // round() helps avoid floating-point inaccuracies from pow()
        sum += round(pow(remainder, digits)); 
        
        temp /= 10;
    }

    // Step 3: Compare total sum with original number
    return (sum == num);
}
