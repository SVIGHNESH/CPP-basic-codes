#include<stdio.h> 
#include<stdlib.h>
struct stack{
    int data ;
    struct stack *next ;

};
struct  stack * top = NULL;
void push(int data){
    struct stack* new = (struct stack*)malloc(sizeof(struct stack*));
    if ( new == NULL){
        printf("Stack is Overflowing");

    }
    else if(top == NULL){
        new -> data = data;
        new -> next = NULL;
        top = new ;
    }
    else{
        new -> data = data ;
        new -> next = top;
        top = new ;
    }
}
struct stack* pop(){
    if(top == NULL){
        printf("The Stack is UnderFlowing");
    }
    else{
        struct stack* ptr = top;
        top = top -> next ;
        free(ptr);
    }
    return top;
}


