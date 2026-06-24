#include <stdio.h>

// Function to calculate x^n without pow()
double calculate_power(double base, int exponent) {
    double result = 1.0;
    int abs_exponent = exponent;

    // Convert negative exponent to positive for the loop
    if (exponent < 0) {
        abs_exponent = -exponent;
    }

    // Multiply base by itself abs_exponent times
    for (int i = 0; i < abs_exponent; i++) {
        result *= base;
    }

    // If original exponent was negative, invert the result
    if (exponent < 0) {
        return 1.0 / result;
    }

    return result;
}

int main() {
    double base;
    int exponent;

    // User input
    printf("Enter base (x): ");
    scanf("%lf", &base);
    printf("Enter exponent (n): ");
    scanf("%d", &exponent);

    // Calculate result
    double answer = calculate_power(base, exponent);

    // Output the result
    printf("%.2lf raised to the power of %d is: %.6lf\n", base, exponent, answer);

    return 0;
}
