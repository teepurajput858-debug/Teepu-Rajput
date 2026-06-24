#include <stdio.h>

// Function declaration
unsigned long long factorial(unsigned int n);

int main() {
    unsigned int num;
    
    printf("Enter a positive integer: ");
    if (scanf("%u", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    
    // Calculate and display the result
    printf("Factorial of %u = %llu\n", num, factorial(num));
    
    return 0;
}

// Recursive function to find factorial
unsigned long long factorial(unsigned int n) {
    // Base Case: Factorial of 0 or 1 is 1
    if (n <= 1) {
        // Stops the recursion stack
        return 1; 
    } 
    // Recursive Case: n! = n * (n - 1)!
    else {
        return n * factorial(n - 1); 
    }
}
