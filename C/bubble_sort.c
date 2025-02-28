#include<stdio.h>

void swap(int *a, int *b) {  // Changed return type from int to void
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {  // Optimized outer loop to n-1
        for(int j = 0; j < n-i-1; j++) {  // Optimized inner loop to avoid already sorted elements
            if(arr[j] > arr[j+1]) {  // Fixed comparison direction
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main() {
    int arr[5] = {5, 4, 3, 2, 1};
    int n = 5;
    bubbleSort(arr, n);
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Added space for better output formatting
    }
    return 0;  // Added return statement
}