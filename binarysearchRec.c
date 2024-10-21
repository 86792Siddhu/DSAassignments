#include <stdio.h>

int binarySearch(int arr[], int low, int high, int target) {
    if (low > high) {
        return -1; // Target not found
    }
    int mid = low + (high - low) / 2;
    if (arr[mid] == target) {
        return mid; // Target found
    }
    if (arr[mid] > target) {
        return binarySearch(arr, low, mid - 1, target); // Search in the left half
    }
    return binarySearch(arr, mid + 1, high, target); // Search in the right half
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int target = 8;
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, size - 1, target);
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }
    return 0;
}
