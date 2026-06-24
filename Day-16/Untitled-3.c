#include <stdio.h>
#include <stdlib.h>

// Comparison function needed for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// Function to find a pair with the given target sum
void findPairTwoPointer(int arr[], int size, int target) {
    // Sort the array first - O(n log n)
    qsort(arr, size, sizeof(int), compare);

    int left = 0;
    int right = size - 1;
    int found = 0;

    // Move pointers towards each other
    while (left < right) {
        int currentSum = arr[left] + arr[right];

        if (currentSum == target) {
            printf("Pair found: (%d, %d)\n", arr[left], arr[right]);
            found = 1;
            left++;  // Move both to find other unique pairs
            right--;
        } 
        else if (currentSum < target) {
            left++;  // Increase sum by moving left pointer right
        } 
        else {
            right--; // Decrease sum by moving right pointer left
        }
    }

    if (!found) {
        printf("No pair found with the given sum.\n");
    }
}

int main() {
    int arr[] = {8, 7, 2, 5, 3, 1};
    int target = 10;
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Using Two-Pointer Approach:\n");
    findPairTwoPointer(arr, size, target);

    return 0;
}
