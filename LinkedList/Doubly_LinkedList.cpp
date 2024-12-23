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

        //Destructor
        ~Node(){
            int val = this -> data;
            if(next != NULL){
                delete next;
                next = NULL;

            }
            cout << "Memory free for node with data "<< val << endl;
        }


};

void print(Node* head){
    Node* temp =  head;
    cout << "LinkedList : ";
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


void insertAtHead(Node* &head,Node* &tail,int d){
    //empty list
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;

    }
    else{
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;

    }
   

}

void insertAtTail(Node* &tail,Node* & head,int d){

    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;


    }
    else{
        Node* temp = new Node(d);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }   
        

}


void insertAtPosition(int d,Node* &head ,Node* &tail,int position ){

    //position is 1 
    if(position == 1){
        insertAtHead(head,tail,d);
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
        insertAtTail(tail,head,d);
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
void deleteNode(int position , Node* &head){

    //deleting the first node 
    if(position == 1){

            Node* temp = head;
            temp -> next -> prev = NULL;
            head = head -> next;
            temp -> next = NULL;
            //memory free  of the start node 
            delete temp;
    }
    else{
        //deleting any middle or last node 

        Node * curr = head;
        Node * prev = NULL;
        int cnt = 1 ; 
        while(cnt < position){
                prev = curr;
                curr = curr -> next;
                cnt ++;
            }


            curr -> prev = NULL;
            prev -> next = curr -> next;
            curr -> next = NULL;
            delete curr;

    }
}


int main (){
        
        Node* head = NULL;
        Node* tail = NULL;



        print(head);
        //cout << "Length of the LinkedList is " << getLength(head) << endl;

        insertAtHead(head,tail,11);
        print(head);

        //cout << "Length of the LinkedList is " << getLength(head) << endl; 
       
       insertAtHead(head,tail,12);
        print(head);

        insertAtHead(head,tail,13);
        print(head);

        insertAtTail(tail,head,44);
        print(head);

       //inserting at the third positions
        //insertAtPosition(35,head,tail,6);
        
        insertAtPosition(3,head,tail,4);
        print(head);
        cout << "Length of the LinkedList is " << getLength(head) << endl;

        deleteNode(2,head);
        print(head);
        cout << "Length of the LinkedList is " << getLength(head) << endl;

        

}