#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    float average;

    // Ask the user for the number of elements
    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[n]; // Declare a Variable Length Array (VLA)

    // Input array elements from the user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of all elements
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Calculate the average (typecast 'sum' to float to prevent integer division)
    average = (float)sum / n;

    // Display the final results
    printf("\n--- Results ---\n");
    printf("Sum of the array elements     = %d\n", sum);
    printf("Average of the array elements = %.2f\n", average);

    return 0;
}
