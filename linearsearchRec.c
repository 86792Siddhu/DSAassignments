#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    if (size == 0) {
        return -1; // Target not found
    }
    if (arr[size - 1] == target) {
        return size - 1; // Target found
    }
    return linearSearch(arr, size - 1, target); // Recur for the rest of the array
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int target = 8;
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = linearSearch(arr, size, target);
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }
    return 0;
}
