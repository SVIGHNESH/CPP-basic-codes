#include<stdio.h>
int partition(int l,int h){
    int pivot = A[l];
    int i,j=l,h;
    while(i<j){
        do{
            i++;
        }while(A[i]<=pivot);
        do{
            j--;
            
        }while(A[j]>pivot);
        if(i<j){
            swap(A[j],A[j]);

        }
    }
    swap(A[l],A[j]);
    return j;
}

void QuickSort(int l,int h){
    if(l<h){
        int j = partition(l,h);
        QuickSort(l,j);
        QuickSort(j+1,h);

    }
}