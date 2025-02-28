#include<stdio.h>

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int arr[],int n){
    for(int i = 0 ; i < n ; i++){
        int minIndex = i;
        for (int j = i+1;j<n;j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
            swap(&arr[i],&arr[minIndex]);
        } //this is me doint selectio sort of the array usin;
        //
    }
    
}

int main(){
    int arr[5]={5,4,3,2,1};
    int n = 5;
    selectionSort(arr,n);
    for(int i = 0 ; i< n ;i++){
        printf("%d ",arr[i]);
    }
   return 0;
    
}