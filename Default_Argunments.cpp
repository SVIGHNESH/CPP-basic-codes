#include<iostream>
using namespace std;
void Print(int arr[],int n,int start=0){
    for(int i = start;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main (){
    int arr[5]={1,2,5,7,9};
    Print(arr,5);

}
