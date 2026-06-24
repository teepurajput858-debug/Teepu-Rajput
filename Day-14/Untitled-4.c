#include <stdio.h>

int main() {
    int arr[] = {4, 2, 7, 4, 8, 2, 3, 1, 7, 9};
    // Calculate the total number of elements in the array
    int size = sizeof(arr) / sizeof(arr[0]); 
    int found_duplicate = 0;

    printf("Duplicate elements in the given array: \n");
    
    // Outer loop selects an element
    for (int i = 0; i < size; i++) {
        // Inner loop compares it with subsequent elements
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                // Check if we already printed this duplicate to avoid repetition
                int already_printed = 0;
                for (int k = 0; k < i; k++) {
                    if (arr[k] == arr[i]) {
                        already_printed = 1;
                        break;
                    }
                }
                
                // If it is a new duplicate, print it
                if (!already_printed) {
                    printf("%d ", arr[i]);
                    found_duplicate = 1;
                }
                break; // Break inner loop once a match is found
            }
        }
    }

    if (!found_duplicate) {
        printf("No duplicate elements found.");
    }
    
    printf("\n");
    return 0;
}
