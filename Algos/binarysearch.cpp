#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int mid =(start+end)/2;
    while(start<=end){
        if( arr[mid] == key)
        {
            return mid;
        }

        //go to right wala part
        if(key>arr[mid])
        {
                start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = (start+end)/2;
    }
    return -1;


}
int main (){
    int even[6]={2,4,12,18,21,18};
    int odd[5]={3,8,11,14,16};
                    //binarsearch(arr,size,key)
    int evenindex = binarysearch(even,6,21);
    cout << "Index of the 21 in even array is  "<< evenindex << endl;

    int oddindex = binarysearch(odd,5,16);
    cout << "Index of the 6 in odd array is "<< oddindex << endl;
} 