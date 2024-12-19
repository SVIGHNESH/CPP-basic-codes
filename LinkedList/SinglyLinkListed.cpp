#include<iostream>
using namespace std;

class Node{
    public : 
        int data;
        Node* next;

        //constructor 
        Node(int data){
           this -> data = data;
           this -> next = NULL;

            
        }

};

void insertAtHead(Node *&head,int d ){

    // new node created 
        Node *temp = new Node(d);
        temp -> next = head;
        head = temp;

}

void insertAtTail(Node* &tail , int d){
     // new node created 
        Node *temp = new Node(d);
        tail -> next = temp;
        tail = temp ;


}

void InsertAtPosition(int position , int d,Node* &head){

    if(position == 1){
        insertAtHead(head,d);
        return;
    }
     Node *temp = head;
     int cnt = 1;
     while(cnt < position-1)
     {
        temp = temp -> next;
        cnt++;
     }

     //creating a node for the d
    Node* NodeToInsert = new Node(d);

    NodeToInsert -> next = temp -> next;
    temp -> next = NodeToInsert;


}

void print (Node  *&head){
    Node *temp = head;
    while (temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
        
    }
    cout << endl;
}
int main (){

    //created a node 
        Node* node1 = new Node(10);
        cout << node1 ->data << endl;
        

        
    // head pointed to node1
        Node *head = node1;
        Node *tail = node1;

        print(head);

    //
    insertAtHead(head,12);

    print(head);

    insertAtTail(tail,34);

    print (head);

   InsertAtPosition(1,463,head);
   print(head);


}