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

void InsertAtPosition(int position , int d,Node* &head,Node* &tail){

    if(position == 1){
        insertAtHead(head,d);  // insert at the start 
        return;
    }
     Node *temp = head;
     int cnt = 1;
     while(cnt < position-1)
     {
        temp = temp -> next;
        cnt++;
     }

     //inserting at the last position 
     if(temp -> next == NULL){
        insertAtTail(tail,d);
        return;
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

    //insert at the start/head of the list 
    insertAtHead(head,12);

    print(head); // print the ll

    insertAtTail(tail,34); //adding/inserting at the last/end of the ll

    print (head);

    InsertAtPosition(4,463,head,tail);
   print(head);

   cout << "Head : " <<head -> data << endl;
   cout << "Tail : " << tail -> data << endl;


} 