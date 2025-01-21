//{ Driver Code Starts
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* buildList() {
    vector<int> arr;
    string input;
    getline(cin, input);
    stringstream ss(input);
    int number;
    while (ss >> number) {
        arr.push_back(number);
    }
    if (arr.empty()) {
        return NULL;
    }
    int val = arr[0];
    int size = arr.size();

    Node* head = new Node(val);
    Node* tail = head;

    for (int i = 1; i < size; i++) {
        val = arr[i];
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

void printList(Node* n) {
    while (n) {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution {
    private:
        void insertAtTail(Node* &ansHead,Node* &ansTail, int val)
        {
            Node* temp = new Node(val);
            
            // empty list 
            if(ansHead == NULL){
                ansHead = temp;
                ansTail = temp;
                //head -> next = NULL;
            }
            else{
                 ansTail -> next = temp;
                 ansTail = temp;
                
            }
        
        }
    Node* add(Node* num1, Node* num2){
        int carry = 0;
        Node* ansHead = NULL;
        Node* ansTail = NULL;
        
        while(num1 != 0 && num2 != 0){
            int sum = carry + num1 ->data + num2 -> data;
            
            int digit = sum % 10;
            
            
            //create node and add the node to the tail
            insertAtTail(ansHead,ansTail,digit);
            
            carry = sum/10;
            num1=num1->next;
            num2=num2->next;
        }
        while( num2  != NULL){
            int sum = carry + num2 -> data;
             int digit = sum % 10;
            //create node and add the node to the tail
            insertAtTail(ansHead,ansTail,digit);
            
            carry = sum/10;
            num2 = num2 -> next;
        }
        while( num1  != NULL){
            int sum = carry + num1 -> data;
             int digit = sum % 10;
            //create node and add the node to the tail
            insertAtTail(ansHead,ansTail,digit);
            
            carry = sum/10;
            num1 = num2 -> next;
        }
        while(carry != 0){
            int sum = carry;
            int digit = sum % 10;
            //create node and add the node to the tail
            insertAtTail(ansHead,ansTail,digit);
            
        }
        return ansHead;
    }
    Node* reverse(Node* head){
            Node* curr = head;
            Node* prev = NULL;
            Node* next  = NULL;
            while(curr != NULL){
                next = curr -> next;
                curr -> next = prev;
                prev = curr;
                curr = next;
            }
            return prev;
        }
  public:
  
    Node* addTwoLists(Node* num1, Node* num2) {
        //step 1 -> reverse input LL
        num1 = reverse(num1);
        num2 = reverse(num2);
        
        //add 2 linked list
        Node* ans = add(num1,num2);
        
        
        //step 3 -> reverse the answer linked list 
        ans = reverse(ans);
        
        return ans;
        
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline character after the integer input

    while (t--) {
        Node* num1 = buildList();
        Node* num2 = buildList();
        Solution ob;
        Node* res = ob.addTwoLists(num1, num2);
        printList(res);
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends