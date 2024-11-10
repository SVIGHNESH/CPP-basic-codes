#include<iostream>
using namespace std;
void print(int arr[],int s,int e){
        for (int i = s;i<=e;i++){
            cout <<arr[i]<<" ";
        }cout << endl;
}
bool BinarySearch(int arr[],int s,int e,int k){
    cout << endl;
    
    int mid=s+(e-s)/2;
    print(arr,s,e);
    cout << "The value of the mid element is "<<arr[mid]<<endl;
    //base case 
    if(s>e){ //element not found
        return false;
    }

    //element found
    if(arr[mid] == k){
        return true;
    }
   
    if(arr[mid] < k){
       return BinarySearch(arr,mid+1,e,k);

    }
    else{
        return BinarySearch(arr,s,mid-1,k);

    }
}
int main(){
    int arr[6]={2,4,6,10,14,16};
    int s = 0;
    int e = 5;
    int k = 4;
    int ans=BinarySearch(arr,s,e,k);
    if(ans){
        cout << "Element is Found";

    }
    else{
        cout << "Element is not Found";
    }
    return 0;
}