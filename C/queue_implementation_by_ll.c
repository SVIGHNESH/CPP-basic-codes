#include<stdio.h>
#include<stdlib.h>
struct node*front = NULL;
struct node *rear = NULL;


struct node{
    int data;
    struct node*next;
   
};

void Enqueue(int n)
{
    struct node*new = (struct node*)malloc(sizeof(struct node));
    if(new == NULL){
        printf("There is no Memory Available in Heap");

    }
    else{
        new ->data = n;
        new -> next = NULL;
        if(rear == NULL){
            front = rear = new;
        }
        else{
            rear->next = new ;
            rear = new;
        }
    }
}

void Dequeue()
{
    if(front == NULL){
        printf("The is Empty");
    }
    
        struct node *temp;
        temp = front;
        front = front -> next ;
        printf("Dequeued elt is : %d",temp -> data);
        free(temp);
    
}

void printq(){
    struct node* ptr=front;
    if(front == NULL){
        printf("The QUEue is Empty.\n");

    }
    printf("Queue :");
    while(ptr -> next !=NULL){
        printf("%d ",ptr->data);
        ptr = ptr -> next;
    }
    printf("NULL");
}
void main(){
    
    Enqueue(45);
    Enqueue(5);
    Enqueue(50);

    printq();



}