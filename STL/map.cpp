#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;


    m[1]="Hello";
    m[2]="My";
    m[3]="Name";
    m[4]="is";
    m[5]="Lakhan";
    for(auto i:m){
        cout<<i.first<<" " <<i.second<<endl;
    }
}