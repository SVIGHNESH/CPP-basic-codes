#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{   
    for(int i = 1;i<n;i++){
        //for round 1 to n-1 

            for (int j = 0; j < n-i; j++) //process element till n-1 th index  
            {
                if(arr[j] > arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }


            }
    }
}


int main(){
    int arr[9] = {10,9,8,7,6,5,4,3,1};
    int n = 9;
    bubbleSort(arr,n);

    for(int i = 0;i<n;i++){
        cout << arr[i] << endl;
        
    }
   
}
