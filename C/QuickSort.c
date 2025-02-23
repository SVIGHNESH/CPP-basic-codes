#include<stdio.h>
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[],int l ,int h){
    int pivot = arr[l];
    int i=l,j=h;
    while(i<j){
        do{
            i++;
        }while(arr[i] <= pivot);
        do{
            j--;
        }while(arr[j] > pivot);
        if(i<j){
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[l],&arr[j]);
    return j;
}
void quickSort(int arr[],int l,int h){
    if(l<h){
        int j = partition(arr,l,h);
        quickSort(arr,l,j);
        quickSort(arr,j+1,h);

    }
}

int main(){
    int arr[5]={5,4,3,2,1};
    int n = 5;
    printf("Array before sorting:");
    for(int i = 0 ; i< n;i++){
        printf("%d ",arr[i]);
    }printf("\n");

    quickSort(arr,0,5);

    printf("Array after sorting:");
    for(int i = 0 ; i< n;i++){
        printf("%d ",arr[i]);
    }printf("\n");

}