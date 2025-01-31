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


        //DESTRUCTOR

        ~Node(){
                //for memory free 

            int value = this -> data;
            if(this -> next != NULL){
                delete next;
                this -> next = NULL;

            }
            cout << "Memory is free for the node data " << value << endl;
        }

};


void insertAtHead(Node *&head,int d ){
    if(head == NULL){
        Node* temp = new Node(d);
       
        head = temp;


    }
    else{
        // new node created 
                Node *temp = new Node(d);
                temp -> next = head;
                head = temp;
    }
    

}

void insertAtTail(Node* &tail , int d){

    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        


    }
    else{
        // new node created 
        Node *temp = new Node(d);
        tail -> next = temp;
        tail = temp ;
    }
}
     
     
void InsertAtPosition(int position , int d,Node* &head,Node* &tail){

    if(position == 1){
        insertAtHead(head,d);  // insert at the start 
        return;
    }

    //any position except first and last 
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
    //this is main logic here to add the node in linked list 
    NodeToInsert -> next = temp -> next;
    temp -> next = NodeToInsert;


}


void deleteNode(int position , Node* &head){

    //deleting the first node 
    if(position == 1){

        Node* temp = head;
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

            prev -> next = curr -> next;

            curr -> next = NULL;
            delete curr;

    }
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

    print(head); // print the lle

    insertAtTail(tail,34); //adding/inserting at the last/end of the ll

    print (head);

    InsertAtPosition(4,463,head,tail);
   print(head);

   cout << "Head : " <<head -> data << endl;
   cout << "Tail : " << tail -> data << endl;


    //deleting node 
    deleteNode(2,head);

    print(head);

} 