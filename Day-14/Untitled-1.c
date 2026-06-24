#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int size, int target) {
    // Loop through each element of the array
    for (int i = 0; i < size; i++) {
        // If target element is found, return its index
        if (arr[i] == target) {
            return i; 
        }
    }
    // Return -1 if the target is not present in the array
    return -1; 
}

int main() {
    int n, target, result;

    // Ask user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare array of size n

    // Input array elements
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Ask user for the target element to find
    printf("Enter the number to search for: ");
    scanf("%d", &target);

    // Call the linearSearch function
    result = linearSearch(arr, n, target);

    // Print the final outcome
    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
