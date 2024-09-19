#include<iostream>
#include<stack>
using namespace std;
int main(){
    
    stack<string> s;
    s.push("VIGHNESH");
    s.push("SHUKLA");
    cout<<"Top element of the stack"<<s.top()<<endl;
    
    cout<<"THe size of the stack --> "<<s.size()<<endl;
    cout<<"EMPTY OR NOT --> "<<s.empty()<<endl;

}