#include <stdio.h>

// Function to count set bits using Brian Kernighan's Algorithm
int countSetBits(unsigned int n) {
    int count = 0;
    while (n > 0) {
        n &= (n - 1); // Clears the lowest set bit
        count++;      // Increments the set bit counter
    }
    return count;
}

int main() {
    unsigned int num;
    
    printf("Enter an integer: ");
    if (scanf("%u", &num) == 1) {
        printf("Number of set bits in %u is: %d\n", num, countSetBits(num));
    }
    
    return 0;
}
