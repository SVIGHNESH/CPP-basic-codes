#include<iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++) {
    int minIndex = i;
    for (int j = i + 1; j < n; j++){
      if (arr[j] < arr[minIndex]) {
        minIndex = j;
      }
    }
    swap(arr[minIndex],arr[i]);
   }
    
}
int main (){
  int arr[5]={12,23,2445,212,2};
  int n =5  ;
  cout << "Unsorted Array:" << endl;
  
  for(int i = 0 ; i< n;i++){
    cout << arr[i] << " ";
  }cout << endl;
  selectionSort(arr,n);
  cout << "Sorted Array:" << endl;
  
  for(int i = 0 ; i< n;i++){
    cout << arr[i] << " ";
  }
}
