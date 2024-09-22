#include<iostream>
#include<queue>
using namespace std;
int main(){
    //max heap
    priority_queue<int>maxi;

    //min heap
    priority_queue<int,vector<int>,greater<int>>mini;
    maxi.push(1);
    maxi.push(4);
    maxi.push(16);
    maxi.push(15);
    int n = maxi.size();
    for(int i=0;i<n;i++){
           cout<<maxi.top()<<endl;        
           maxi.pop();

}cout<<endl;


    mini.push(34);
    mini.push(4);
    mini.push(2);
    mini.push(6);
    mini.push(40);
    mini.push(22);
    mini.push(46);
    mini.push(67);
    int m = mini.size();
    for(int i = 0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;

    cout<<"Maxi khali ha kya?:"<<maxi.empty()<<endl; 
    cout<<"Mini khali ha kya?:"<<mini.empty()<<endl;


    }
