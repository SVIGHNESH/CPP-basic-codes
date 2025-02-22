#include<stdio.h> 
#include<stdlib.h>
struct stack{
    int data ;
    struct stack *next ;

};
void push(struct  stack * top,int data){
    struct stack* new = (struct stack*)malloc(sizeof(struct stack*))
    if ( new == NULL){
        printf("Stack is Overflowing");

    }
    if(top == NULL){
        
    }
}
