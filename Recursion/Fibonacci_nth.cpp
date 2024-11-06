#include<iostream>
using namespace std;
int fib(int n) {
        //base case
        if(n==0){
            return 0;
        }
        if(n == 1){
            return 1;

        }
        int ans =  fib(n-1) + fib(n-2);
        return ans;
    }
int main (){

    cout<<"ENter The Term Upto:"<<endl;
    int n;
    cin >> n;
    int print;
    print = fib(n);
    cout << print << endl;
}