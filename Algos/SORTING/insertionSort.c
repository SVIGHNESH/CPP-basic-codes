#include<stdio.h>
void insertionSort(int arr[],int n){
    for(int i =0;i<n;i++){
        int key = arr[i];
        int j=i-1;
        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j = j-1;

        }
        arr[j+1 ] = key;

    }
}

int main(){
    int arr[4]={34,2,553,21,};
    int n = 4;
    insertionSort(arr,n);
    for(int i = 0 ;i<n;i++){
        printf("%d \n",arr[i]);
    }
}