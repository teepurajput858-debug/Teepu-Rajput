#include <stdio.h>
#include <stdlib.h>

// Comparison function needed for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

void findMaxFrequencyElement(int arr[], int n) {
    if (n <= 0) {
        printf("Array is empty.\n");
        return;
    }

    // Step 1: Sort the array to bring duplicate elements together
    qsort(arr, n, sizeof(int), compare);

    int max_element = arr[0];
    int max_count = 1;
    
    int current_element = arr[0];
    int current_count = 1;

    // Step 2: Linear scan to count consecutive elements
    for (int i = 1; i < n; i++) {
        if (arr[i] == current_element) {
            current_count++;
        } else {
            // Check if the completed sequence is the longest so far
            if (current_count > max_count) {
                max_count = current_count;
                max_element = current_element;
            }
            // Reset for the new element sequence
            current_element = arr[i];
            current_count = 1;
        }
    }

    // Final check for the last element sequence in the loop
    if (current_count > max_count) {
        max_count = current_count;
        max_element = current_element;
    }

    // Print the results
    printf("Element with maximum frequency: %d\n", max_element);
    printf("Frequency: %d times\n", max_count);
}

int main() {
    int arr[] = {4, 2, 8, 3, 2, 4, 8, 4, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    findMaxFrequencyElement(arr, n);

    return 0;
}
