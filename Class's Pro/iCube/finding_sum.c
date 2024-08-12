#include <stdio.h>

int main() {
    int arr[] = {2, 4, 6, 8, 10,12};
    int target;
    int length = sizeof(arr) / sizeof(arr[0]);
    int left = 0;
    int right = length - 1;

    scanf("%d",&target);
    while (left < right) {
        int Sum = arr[left] + arr[right];
        if (Sum == target) {
            printf("YES\n");
            return 0; 
        } else if (Sum < target) {
            left++;
        } else {
            right--;
        }
    }

    printf("NO\n");
    return 0;
}
