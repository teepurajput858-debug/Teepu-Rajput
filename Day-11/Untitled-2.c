#include <stdio.h>

// Function declaration
int findMax(int num1, int num2);

int main() {
    int a = 25;
    int b = 42;
    int result;

    // Call the function and store the maximum value
    result = findMax(a, b);

    printf("The maximum value between %d and %d is: %d\n", a, b, result);

    return 0;
}

// Function definition to find the maximum
int findMax(int num1, int num2) {
    // Returns num1 if true, otherwise returns num2
    return (num1 > num2) ? num1 : num2;
}
