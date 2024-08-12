#include <stdio.h>

void selectionSort(int arr[],int);
void swap(int*,int*);

int main() {
    int arr[5];
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    selectionSort(arr, n);

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
void selectionSort(int arr[], int n) {
    int i, j, minIdx, temp;

    // Iterate through the entire array
    for (i = 0; i < n - 1; i++) {
        // Assume the current element is the minimum
        minIdx = i;

        // Find the index of the minimum element in the unsorted part of the array
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }

        // Swap the minimum element with the first element in the unsorted part
        swap(&arr[i],&arr[minIdx]);
    }
}

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}