#include<bits/stdc++.h>
using namespace std;
int main(){

       //creation of stack
    stack<int> s;

    //push operation
    s.push(34);
    cout <<"Printing the Top Element:"<< s.top( ) << endl;
    // s.pop();

    if(s.empty()){
        cout << "Stack is Empty" << endl;
    }
    else{
        cout << s.top();
    }

    cout << "The size of the stack is "<< s.size();

    stack<string> s;
    s.push("VIGHNESH");
    s.push("SHUKLA");
    cout<<"Top element of the stack"<<s.top()<<endl;
    
    cout<<"THe size of the stack --> "<<s.size()<<endl;
    cout<<"EMPTY OR NOT --> "<<s.empty()<<endl;
    }
}