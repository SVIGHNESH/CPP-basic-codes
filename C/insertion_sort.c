#include<stdio.h>
void insertionSort(int arr[],int n ){
    for(int i = 2;i<=n;i++){
        int key = arr[i];
        int j = i -1 ;
        while(arr[j]>key && j > 0){
            arr[j+1] = arr[j];
            j = j -1 ;
        }
        arr[j+1]=key;
    }
}