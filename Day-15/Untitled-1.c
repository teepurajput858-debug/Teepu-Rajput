#include <stdio.h>

// Function to reverse the array in-place
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    int temp;

    // Swap elements from both ends until pointers meet
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move pointers closer to the center
        start++;
        end--;
    }
}

// Function to print the array elements
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr, size);

    // Call the function to reverse the array
    reverseArray(arr, size);

    printf("Reversed array:\n");
    printArray(arr, size);

    return 0;
}
