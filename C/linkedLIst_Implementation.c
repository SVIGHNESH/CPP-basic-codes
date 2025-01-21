#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node{
    int data;
    struct Node* next;
};

void printLL(struct Node* start)
{
    struct Node* temp = start;
    while(temp != NULL)
    {
        printf("%d -> ",temp->data);
        temp = temp -> next ;
    }
    printf("NULL");
    printf("\n");

}

void main()
{
    struct Node* temp;
    struct Node* start = NULL;
    struct Node* ptr = NULL;
    int n ,data;
    char select[10];
    printf("How many nodes you want to insert in the list \n");
    scanf("%d",&n);

    for(int i = 0 ; i < n ; i++){
        ptr = malloc(sizeof(struct Node));
        printf("Enter the data for the %d node \n",i+1);
        scanf("%d",&data);
    

    ptr -> data = data;
    ptr -> next = NULL;

    if(start == NULL){
        start = ptr;
        temp = start;
    }
    else{
        temp -> next = ptr;
        temp = temp -> next ;

    }
}

printf("Do you want to show the Linked List(Y/N).");
scanf("%s",&select);
if(strcmp(select, "y") == 0 || strcmp(select, "Y") == 0 || 
        strcmp(select, "Yes") == 0 || strcmp(select, "yes") == 0){
    printLL(start);
}
else{
    printf("Exting the program\n");
}



}
