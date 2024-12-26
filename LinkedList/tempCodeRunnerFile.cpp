#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
    
    ~Node() {
        if(this->next != NULL) {
            delete next;
        }
        cout << "Memory free for node with data: " << data << endl;
    }
};

void insertNode(Node* &tail, int element, int d) {
    if(tail == NULL) {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else {
        Node* curr = tail;
        while(curr->data != element) {
            curr = curr->next;
            if(curr == tail) {
                cout << "Element not found" << endl;
                return;
            }
        }
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node* &tail) {
    if(tail == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    Node* temp = tail;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while(temp != tail);
    cout << endl;
}

void deleteNode(Node* &tail,int value){
    //empty list 
    if(tail == NULL){ 
        cout << "LIST is empty,Please Check Again"<<endl;

    }
    //non-empty list
    else{
         //Assuming that the "value" is present in the list
          Node* prev = tail;
          Node* curr = prev -> next;
        
        while(curr -> data != value){
             prev = curr;
            curr = curr -> next;
             
        }

         prev -> next = curr -> next;

         //for the single elt in the LInked LIst
         if(curr == prev){
            tail = NULL;

         }

         // >=2 elt in the linked list
         else if(tail == curr){
             tail = prev;

         }
         curr -> next = NULL;
         delete curr; 

          
           
    }
}

int main() {
    Node* tail = NULL;
    
    insertNode(tail, 3, 5);
    print(tail);
    insertNode(tail, 5, 7);
    print(tail);
    insertNode(tail, 7, 6);
    print(tail);
    deleteNode(tail,7);
    print(tail);
    deleteNode(tail,6);
    print(tail);
    deleteNode(tail,5);
    print(tail);
    return 0;
}