#include<iostream>
#include<deque>
using namespace std;
int main (){
    deque<int>d;
    d.push_back(3);
    d.push_back(1);
    d.push_front(2);
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    // d.pop_back();
    // cout<<"Popping  the last element of the deque"<<endl;
    //  for(int i:d){
    //     cout<<i<<" ";
    // }cout<<endl;

    // d.pop_front();
    // cout <<"Popping the first element of the deque"<<endl;
    //  for(int i:d){
    //     cout<<i<<" ";
    // }cout<<endl;
    cout<<"Print the first index element "<<d.at(1)<<endl;
    cout<<"Empty or not --> "<<d.empty();

}