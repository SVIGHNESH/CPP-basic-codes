#include<bits/stdc++.h>
using namespace std;
void insertAtBottom(stack<int> &stack,int element){
    if(stack.empty()){
        stack.push(element);
        return;
    }
    int num = stack.top();
    stack.pop();
    insertAtBottom(stack, element);

    stack.push(num);

}
void reverseStack(stack<int> &stack) {
    //base case 
    if(stack.empty()){
         return;
    }
    int num = stack.top();
    stack.pop();
    

    //recursive call 
    reverseStack(stack);

    insertAtBottom(stack,num);
    
     
}