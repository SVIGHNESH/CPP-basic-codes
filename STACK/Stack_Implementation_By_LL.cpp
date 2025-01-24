#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;

        Node(int value){
            data  = value;
            next = NULL;
        }
};

class Stack{
    public: 
        Node* top;
        int size;

        Stack(){
            top = NULL;
            size = 0 ;
        }
        void push(int element){
            Node* NewNode = new Node(element);
            NewNode->next = top;
            top = NewNode;
            size++;

        }

        bool isEmpty(){
            if(top == NULL)
                return true;
            else{
                return false;
            }
        }
        void pop(){
            if(isEmpty()){
                cout << "Stack UnderFlow" << endl;
                
            }
            Node* temp = top;
            top = top -> next;
            delete temp;
            size--;
        }

        int peek(){
            if(isEmpty()){
                cout << "Stack is Empty" << endl;
                return -1;
            }
            return top -> data;
        }
};

int main(){
    Stack st;
    st.push(23);
    st.push(342);
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    
}