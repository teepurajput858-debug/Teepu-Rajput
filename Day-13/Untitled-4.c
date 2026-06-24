#include <stdio.h>

int main() {
    int size, i;
    int even_count = 0;
    int odd_count = 0;

    // Ask user for the array size
    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &size) != 1 || size <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[size]; // Declare the array with the user-defined size

    // Input array elements from the user
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Loop through the array to count even and odd numbers
    for (i = 0; i < size; i++) {
        // If the remainder is 0 when divided by 2, it is even
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    // Print the final counts
    printf("\nTotal Even elements: %d\n", even_count);
    printf("Total Odd elements: %d\n", odd_count);

    return 0;
}
