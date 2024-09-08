#include<iostream>
using namespace std;
int main ()
{
        int n;
        cout<<"Enter the value of n"<<endl;
        cin >> n;
        bool isprime = 1;
        for(int i=2;i<n;i++)
        {
            //if rem = 0 for any number between 1 to n then the given number is not prime
            if(n%i==0){
               // cout<<"The given numbe is not prime number"<<endl;
                isprime = 0;
                break;
            }
           
        }
        if(isprime==0)
        {
            cout<<"Not a Prime Number"<<endl;
        }
        else{
            cout<<"is aPrime Number"<<endl;
        }
}
