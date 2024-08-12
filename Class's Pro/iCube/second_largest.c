#include <stdio.h>

int main() {
	
	int n, num, l, sl;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("At least 2 numbers are required.\n");
        return 1; 
    }

    printf("Enter element 1: ");
    scanf("%d", &l);

    printf("Enter element 2: ");
    scanf("%d", &sl);

    if (l < sl) {
        int temp = l;
        l = sl;
        sl = temp;
    }

    for (int i = 2; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &num);

        if (num > l) {
            sl = l;
            l = num;
        } else if (num > sl && num != l) {
            sl = num;
        }
    }

    printf("The second largest number is: %d\n", sl);

	return 0;
}

