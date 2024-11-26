#include<stdio.h>
#include<math.h>
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;


        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;


        arr[j + 1] = key;
        
    }
}
}

int main(){
    int arr[5]={1000,43,5,25,8};
    int n = 5;
    printf("Unsorted Array: \n");
    for(int i = 0; i < n; i++){

        printf("%d  ",arr[i]);

    }printf("\n");
    insertionSort(arr,n);
    printf("Sorted Array: \n");
    for(int i = 0; i < n; i++){

        printf("%d ",arr[i]);

    }
    

}
