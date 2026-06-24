#include <stdio.h>

int main() {
    int size, i;

    // 1. Get the size of the array from the user
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    // Declare the array with the user-defined size
    int arr[size];

    // 2. Input array elements
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &arr[i]); // Store input at the specific index
    }

    // 3. Display array elements
    printf("\nThe elements in the array are:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]); // Print each element separated by a space
    }
    printf("\n");

    return 0;
}
