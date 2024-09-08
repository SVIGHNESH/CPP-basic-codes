#include<iostream>
using namespace std;
int factorial(int n){
        int fact = 1;
        for (int i = 1; i <= n; i++)
        {
            fact = fact*i;
        }

        return fact;
        }
int nCr(int n ,int r){
        int num = factorial(n);
        int den = factorial(r)*factorial(n-r);
        int ans = num/den;
        return ans;
}

int main (){
    int n,r;
    cout<<"ENter the value of n "<<endl;
    cin >> n;
    cout <<"Enter the value of r"<<endl;
    cin >> r;
    cout <<"The nCR of the given values is  "<<nCr(n,r)<<endl;    
    }