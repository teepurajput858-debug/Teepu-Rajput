#include <stdio.h>

int main() {
    int num;
    // Use unsigned long long to hold large results (up to 20!)
    unsigned long long factorial = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Error handling: Factorials are not defined for negative numbers
    if (num < 0) {
        printf("Error: Factorial of a negative number does not exist.\n");
    } 
    else {
        // Loop to multiply numbers from 1 to num
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}
