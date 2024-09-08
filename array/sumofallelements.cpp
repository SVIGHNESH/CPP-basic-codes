#include<iostream>
using namespace std;    
int main(){
    int sum = 0;
    int a[5];
    for (int i = 0;   i < 5; i++)
    {
        cin >> a[i];
    }
    for (int  i = 0; i < 5; i++)
    {
        sum = sum+a[i];
    }

    cout<<"the sum of all the elements of the array is : "<< sum <<endl;
    

}