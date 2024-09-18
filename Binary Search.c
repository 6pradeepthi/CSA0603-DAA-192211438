#include <stdio.h>

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target,  low=0, high= n - 1;
    printf("Enter target element: ");
    scanf("%d", &target);
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            printf("Target found at index %d.\n", mid);
            return 0;
        }
        if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    printf("Target not found.\n");
    return 0;
}

