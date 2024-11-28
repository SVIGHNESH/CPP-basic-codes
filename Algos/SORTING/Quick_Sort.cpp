#include<iostream>
using namespace std;


int partition(int arr[],int s,int e){
    int pivot = arr[s];
    int cnt = 0;
    for(int i = s+1;i <= e; i++){
        if(arr[i] <= pivot){
            cnt++;

        }
    }
    //place the pivot in the right position 

    int pivotIndex = s + cnt;
    swap(arr[pivotIndex],arr[s]);
    int i = s,j = e;
    //yahe pe hum right aur left wala part smbhal lete ha 
    

    while(i < pivotIndex && j > pivotIndex ){

        while(arr[i] <= pivot){
            i++;
        }

        while(arr[j] > pivot){
            j--;
        }

        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    
    return pivotIndex;



}

void quickSort(int arr[],int s,int e){
        //base case
        if(s>=e){
             return;

        }

        //partition karenge
        int p = partition(arr,s,e);
        //left sort karenge
        quickSort(arr,s,p-1);

        //right side sorge karenge 
        quickSort(arr,p+1,e);




}
int main (){
    int arr[12]={2,4,1,6,34,34,24,2342,324,3565,7,9};
    int n = 12;
    quickSort(arr,0,n-1);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout << endl;

}