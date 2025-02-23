#include<stdio.h>

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int arr[],int n){
    for(int i = 0 ; i < n ; i++){
        int minIndex = i;
        for (int j = i+1;j<n;i++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
            swap(&arr[i],arr[minIndex]);
        }
    }
}