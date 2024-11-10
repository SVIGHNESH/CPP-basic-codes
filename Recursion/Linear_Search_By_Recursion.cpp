#include<iostream>
using namespace std;
void print(int arr[],int size){
    cout << "The Size of the Array is "<<size<<endl;
    for(int i = 0;i < size; i++){
        cout << arr[i] <<" ";

    }cout << endl;
}

int linearSearch(int arr[], int size, int key){
    print(arr,size);
    if(size <= 0){
        return 0;
    }
    if(arr[0] == key){
        return 1;
    }
    return linearSearch(arr+1, size-1, key);
}

int main(){
    int arr[5]={1,2,3,4,5};
    int key=50;
    int searched = linearSearch(arr, 5, key);
    if(searched){
        cout << "Element is Found" << endl;
    }
    else{
        cout<< "Element is not Found"<< endl;
    }
}
