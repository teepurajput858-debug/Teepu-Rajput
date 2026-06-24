#include <stdio.h>

int removeDuplicates(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            // If a duplicate element is found
            if (arr[i] == arr[j]) {
                // Shift all subsequent elements one position to the left
                for (int k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                // Reduce the logical size of the array
                size--;
                // Decrement j to check the shifted element at the same index
                j--;
            }
        }
    }
    return size;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 1, 5, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Remove duplicates and get the new size
    size = removeDuplicates(arr, size);

    printf("Array after removing duplicates: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
