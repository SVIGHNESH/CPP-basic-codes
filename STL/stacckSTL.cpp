#include<bits/stdc++.h>
using namespace std;

class Stack{
    //properties

    int *arr;
    int top;
    int size;





    //behaviour
    Stack(int size){
        this -> size = size;
        arr = new int [size];
        top = -1;

    }

    void push(int element){
            if(size - top > 1){
                top++;
                arr[top] = element;

            }
            else{
                cout << "Stack OverFlow" << endl;
            }
    }

    void pop(){

        if(top >= 0){
            top--;

        }
        else{
            cout << "Stack UnderFlow" << endl;
        }
    }

    int peek(){
        if(top >= 0 && top < size)
            return arr[top];
        else{
            cout << "Stack is Empty" << endl; 

        }
    }

    bool isEmpty(){

    }
};
int main(){
    
/*
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

    // stack<string> s;
    // s.push("VIGHNESH");
    // s.push("SHUKLA");
    // cout<<"Top element of the stack"<<s.top()<<endl;
    
    // cout<<"THe size of the stack --> "<<s.size()<<endl;
    // cout<<"EMPTY OR NOT --> "<<s.empty()<<endl;
*/


}