#include<iostream>
#include<string>
using namespace std;
void sayDigits(int n,string arr[]){
        //base case
        if(n == 0)
            return;

        int digit = n % 10;
        n = n/10;
        
        sayDigits(n,arr);
        cout << arr[digit] <<" ";
}
int main (){
    string arr[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    int n;
    cout << "Enter the Number(in Digit):" << endl;
    cin >> n;
    cout << endl ;
    sayDigits(n,arr);
    cout << endl ;
}