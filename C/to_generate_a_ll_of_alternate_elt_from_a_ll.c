#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};

struct node* createAlternateList(struct node* head){
    if(head == NULL){
        return NULL;
    }

    struct node* newhead = NULL;
    struct node* newtail = NULL;
    struct node* current = head;

    int toggle = 1 ;
    while(!current){
        

        if(toggle){
            struct node* newnode = (struct node*)malloc(sizeof(struct node));
        
            newnode -> data = current -> data;
            newnode -> next = NULL;
            if(!newnode){
                newhead = newnode;
                newtail = newnode;

            }
            else{
                newtail = newtail -> next;
                newtail = newnode;
            }
        }
        toggle = !toggle;
        current = current -> next;
        

    }

}