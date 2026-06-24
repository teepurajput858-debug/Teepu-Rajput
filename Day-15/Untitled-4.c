#include <stdio.h>

// Function to move all zeroes to the end of the array
void moveZeroesToEnd(int arr[], int size) {
    int count = 0; // Tracks the position for the next non-zero element

    // Step 1: Traverse the array. If the element is non-zero,
    // place it at 'arr[count]' and increment 'count'.
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            arr[count] = arr[i];
            count++;
        }
    }

    // Step 2: Fill the remaining positions of the array with zeroes.
    while (count < size) {
        arr[count] = 0;
        count++;
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 0, 2, 0, 3, 0, 4, 0, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr, size);

    // Call the function to shift zeroes
    moveZeroesToEnd(arr, size);

    printf("Modified array after moving zeroes to the end:\n");
    printArray(arr, size);

    return 0;
}
