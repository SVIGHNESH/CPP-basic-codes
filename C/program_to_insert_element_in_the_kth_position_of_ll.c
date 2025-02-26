#include<stdio.h>
struct node{
    int data;
    struct node*next;
};

struct node* insertAtPosition(struct node* head ,int position,int data){
    struct node* temp = head;
    int count = 0 ;
    while(count < position){
        temp = temp -> next ;
        count++;

    }
    struct node* new = (struct node*)malloc(sizeof(struct node));
    new -> data = data;
    new -> next = temp -> next;
    temp -> next = new;

    

}