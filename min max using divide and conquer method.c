#include <stdio.h>

void findMinAndMax(int arr[], int low, int high, int* min, int* max) {
    if (low == high) {
        *min = *max = arr[low];
    } else if (low + 1 == high) {
        if (arr[low] < arr[high]) {
            *min = arr[low];
            *max = arr[high];
        } else {
            *min = arr[high];
            *max = arr[low];
        }
    } else {
        int mid = (low + high) / 2;
        int min1, max1, min2, max2;

        findMinAndMax(arr, low, mid, &min1, &max1);
        findMinAndMax(arr, mid + 1, high, &min2, &max2);

        *min = (min1 < min2) ? min1 : min2;
        *max = (max1 > max2) ? max1 : max2;
    }
}

int main() {
    int arr[] = {5, 2, 8, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min, max;

    findMinAndMax(arr, 0, n - 1, &min, &max);

    printf("Min: %d, Max: %d\n", min, max);

    return 0;
}

