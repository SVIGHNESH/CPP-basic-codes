#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void bubbleSort(int arr[], int n) {
    int swapped;
    {
        swapped = 0;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                swap(&arr[i], &arr[i + 1]);
                swapped = 1;
            }
        }
    } 
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 11, 12, 13};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array:\n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted Array:\n");
    printArray(arr, n);

    return 0;
}
