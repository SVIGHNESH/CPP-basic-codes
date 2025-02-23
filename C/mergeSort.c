#include<stdio.h>
void merge(int arr[],int s ,int e ){
    int middle = (s+e)/2;
    int len1 = middle - s + 1 ;
    int len2 = e - middle;
    int first[len1];
    int second[len2];

    int mainArrayIndex = s; 
    for(int i = 0 ;i< len1;i++){
        first[i] = arr[mainArrayIndex++];
    }
    mainArrayIndex = middle + 1 ;
    for (int i = 0 ; i< len2 ;i++){
        second[i] = arr[mainArrayIndex++];
    }

    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;
    while(index1 < len1 && index2 <len2){
        if(first[index1] < second[index2]){
         arr[mainArrayIndex++] =  first[index1++]; 
        }
        else{
          arr[mainArrayIndex++] = second[index2++] ;
        }

    }

    while(index1 < len1){
         arr[mainArrayIndex++] = first[index1++];
    }
    while(index2 < len2){
        arr[mainArrayIndex++] = second[index2++];
    }
}

void mergeSort(int arr[],int s ,int e){
    if(s < e){
        int middle = (s+e)/2;

        mergeSort(arr,s,middle);
        mergeSort(arr,middle+1,e);
        merge(arr,s,e);

    }
}

int main(){

    int arr[8] ={8,7,6,5,4,3,2,1};
    int n = 8;
    printf("The Array Before:");
    for(int i = 0 ; i< n ;i++){
        printf("%d " ,arr[i]);
    }printf("\n");


    mergeSort(arr,0,7);

    printf("The Array After:");
    for(int i = 0 ; i< 8;i++){
        printf("%d " ,arr[i]);
    }
    printf("\n");

}