#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int>v;
     v.push_back(2);
     v.push_back(31);
    v.push_back(41);
     v.push_back(51);

     cout<<binary_search(v.begin(),v.end(),31)<<endl;
    int a = 4;
    int b = 5;
    cout<<"THe maximum element in the given numbers is "<<max(a,b)<<endl;
    cout<<"The minimum elemenyt in the given number is  "<<min(a,b)<<endl;
     cout<<"The value of a is  before the swapping  = "<< a <<" and the value b is "<<b<<endl;
    swap(a,b);
   
    cout<<"The value of a is  after the swapping  = "<< a <<" and the value b is "<<b<<endl;

    string  abcd = abcd;
    reverse (abcd.begin(),abcd.end());
    cout<<"sring -->"<< abcd <<endl;
}
