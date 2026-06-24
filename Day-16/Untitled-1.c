#include <stdio.h>

// Function to find the missing number using sum formula
int findMissingUsingSum(int arr[], int size) {
    // Since one number is missing, the total number of elements N is size + 1
    int N = size + 1;
    
    // Calculate sum of first N natural numbers
    int expectedSum = (N * (N + 1)) / 2;
    
    // Calculate the actual sum of elements in the array
    int actualSum = 0;
    for (int i = 0; i < size; i++) {
        actualSum += arr[i];
    }
    
    // The difference is the missing number
    return expectedSum - actualSum;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6}; // '3' is missing
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int missingNum = findMissingUsingSum(arr, size);
    printf("The missing number is: %d\n", missingNum);
    
    return 0;
}
