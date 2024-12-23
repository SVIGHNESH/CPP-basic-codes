#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;


        //constructor
        Node(int d){
            this -> data = d;
            this -> prev = NULL;
            this -> next = NULL;

        }


};

void print(Node* head){
    Node* temp =  head;

    while (temp != NULL){
        cout <<temp -> data << " ";
        temp = temp -> next;

    }
    cout << endl;

}

int getLength(Node* head){
    int length = 0;
    Node* temp =  head;

    while (temp != NULL){
        length++;

        temp = temp -> next;

    }
    return length;

}


void insertAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;

}

void insertAtTail(Node* &tail,int d){
        
        Node* temp = new Node(d);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;

}

void insertAtPosition(int d,Node* &head ,Node* &tail,int position ){

    //position is 1 
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

     //inserting at the last position 
     if(temp -> next == NULL){
        insertAtTail(tail,d);
        return;
     }

     //creating a node for the d

     //main logic is here that inserts the node at any position in the middle 
    Node* NodeToInsert = new Node(d);

    NodeToInsert -> next = temp -> next;
    NodeToInsert -> prev = temp;
    temp -> next -> prev = NodeToInsert;

    temp -> next = NodeToInsert;
}
int main (){
        Node* node1 = new Node(10);
        Node* head = node1;
        Node* tail = node1;



        print(head);
        //cout << "Length of the LinkedList is " << getLength(head) << endl;

        insertAtHead(head,11);
        print(head);

        //cout << "Length of the LinkedList is " << getLength(head) << endl; 
       
       insertAtHead(head,12);
        print(head);

        insertAtHead(head,13);
        print(head);

        insertAtTail(tail,44);
        print(head);

       //inserting at the third positions
        insertAtPosition(35,head,tail,3);
        print(head);
}