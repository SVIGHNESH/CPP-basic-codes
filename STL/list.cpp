#include<iostream>
#include<list>
using namespace std;
int main (){
    list<int>l;
    l.push_back(1);
    l.push_front(2);
     l.push_front(2);
    for(int i : l){
        cout<<i<<" ";
    }
    l.erase(l.begin());
    cout<<"After the erase"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"The size of the list --> "<<l.size()<<endl;


    list<int>n(5,100);
     cout<<"The size of the new list --> "<<n.size()<<endl;

    for(int i:n){
        cout<<i<<" ";
    }cout<<endl;
}


//i don't know what is going to happen to this repo
