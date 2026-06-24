#include <stdio.h>
#include <limits.h> // Required for INT_MIN

void findSecondLargest(int arr[], int size) {
    // There must be at least two elements
    if (size < 2) {
        printf("Invalid Input! Array must contain at least two elements.\n");
        return;
    }

    // Initialize both tracking variables to the minimum possible integer value
    int largest = INT_MIN;
    int second_largest = INT_MIN;

    for (int i = 0; i < size; i++) {
        // If current element is larger than the largest, update both
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }
        // If current element is between largest and second_largest
        else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    // Check if a valid second largest element was actually found
    if (second_largest == INT_MIN) {
        printf("There is no distinct second largest element (all elements might be identical).\n");
    } else {
        printf("The largest element is: %d\n", largest);
        printf("The second largest element is: %d\n", second_largest);
    }
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    findSecondLargest(arr, size);

    return 0;
}
