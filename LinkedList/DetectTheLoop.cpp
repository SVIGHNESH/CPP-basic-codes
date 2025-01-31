#include<bits/stdc++.h>
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

bool detectLoop(Node* head){
    Node* temp ;
    temp = head;

    if(head == NULL)
        return false ;
    
    map<Node*, bool> visited;
    
    while(temp != NULL){

        if(visited[temp] == true){ //cycle is present 
            return true ;

        }
        visited[temp] = true;
        temp = temp->next;

    }

    return false;

}

Node* FloydDetectionLoop(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* fast = head -> next;
    Node* slow = head;//this is the node of slow and fast 
    
    while(slow != NULL && fast != NULL){
        fast = fast -> next ;
        if(fast != NULL){ 
            fast = fast -> next;
        }

        slow = slow -> next ;

        if(slow == fast){
           // cout << "The loop is present at " << slow -> data << endl;
            return slow;

        }
    }
    return NULL;
    
}

Node* getStartingNode(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* intersection = FloydDetectionLoop(head);
    Node* slow = head;
    while(slow != intersection){
        slow = slow -> next;
        intersection = intersection -> next;
    }

    return slow;
}

void removeLoop(Node* head){
    if(head == NULL)
        return ;

    Node* startOfLoop =  getStartingNode(head);
    Node* temp = startOfLoop;

    while(temp -> next != startOfLoop){
        temp = temp -> next;
    } 

    temp -> next = NULL;


}

Node* deleteDuplicates(Node* head) {
        if(head == NULL){
            return NULL;
        }
        ListNode* curr = head;

        while(curr != NULL){
            if((curr -> next != NULL) && (curr->val == curr -> next -> val)){
                Node*  next_next = curr-> next -> next ;
                Node* nodeTodelete= curr -> next ;

                delete(nodeTodelete);
                curr-> next = next_next;

            }
            else{
                curr = curr -> next ;
            }
        }

        return head;
    }
int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    // Insert nodes
    insertAtTail(tail, 34);
    insertAtTail(tail, 323);
    insertAtTail(tail, 45);
    insertAtTail(tail, 56);

    // Create a cycle
    tail->next = head->next;

    // Detect and handle the loop
    if (detectLoop(head)) {
        cout << "Cycle detected." << endl;
        Node* starting = getStartingNode(head);
        cout << "Loop starts at: " << starting->data << endl;
        removeLoop(head);
    } else {
        cout << "No cycle detected." << endl;
    }

    // Verify loop removal
    if (!detectLoop(head)) {
        cout << "Cycle removed successfully." << endl;
    }

    // Print the list
    print(head);

    return 0;
}


