//I don't know
#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;

    //set does not take the repeated values
    s.insert(5);
    s.insert(4);
    s.insert(57);
    s.insert(5);  //<-- here 5 is repeated that is why set does not acknowledge it.
    s.insert(3);
    s.insert(86);
    s.insert(43);

    for (auto i : s)
    {
       cout<<i<<" ";
    }

    s.erase(s.begin());
    cout<<"After the erase operation the set will be"<<endl;
    for (auto i : s)
    {
       cout<<i<<" ";
    }cout << endl;


    cout<<"The element is "<<s.count(5)<<endl;
    set<int>::iterator itr=s.find(86);
    cout<<"Value +nt at itr --> "<<*itr<<endl;



}