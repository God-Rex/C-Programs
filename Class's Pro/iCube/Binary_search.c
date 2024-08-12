#include <stdio.h>

// Binary search function
int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // If the target is found at the middle index, return the index
        if (arr[mid] == target) {
            return mid;
        }
        // If the target is greater, narrow the search to the right half
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        // If the target is smaller, narrow the search to the left half
        else {
            right = mid - 1;
        }
    }

    // Target not found in the array
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int target = 7;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1) {
        printf("Element %d found at index %d\n", target, result);
    } else {
        printf("Element %d not found in the array\n", target);
    }

    return 0;
}
