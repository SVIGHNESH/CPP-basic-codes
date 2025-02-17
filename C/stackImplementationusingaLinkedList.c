#include <stdio.h>
#include <stdlib.h>

// Structure for a stack node
struct Node {
    int data;
    struct Node* next;
};

// Function to initialize an empty stack
struct Node* createStack() {
    return NULL;
}

// Function to check if the stack is empty
int isEmpty(struct Node* top) {
    return top == NULL;
}

// Function to push an element onto the stack
void push(struct Node** top, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Heap overflow!\n");
        return;
    }
    newNode->data = value;
    newNode->next = *top;
    *top = newNode;
    printf("Pushed %d onto the stack.\n", value);
}

// Function to pop an element from the stack
int pop(struct Node** top) {
    if (isEmpty(*top)) {
        printf("Stack underflow!\n");
        return -1;
    }
    struct Node* temp = *top;
    int popped = temp->data;
    *top = temp->next;
    free(temp);
    return popped;
}

// Function to peek the top element of the stack
int peek(struct Node* top) {
    if (isEmpty(top)) {
        printf("Stack is empty!\n");
        return -1;
    }
    return top->data;
}

// Function to display the stack elements
void display(struct Node* top) {
    if (isEmpty(top)) {
        printf("Stack is empty!\n");
        return;
    }
    struct Node* temp = top;
    printf("Stack elements: ");
    while (temp) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* stack = createStack();
    
    push(&stack, 10);
    
    display(stack);
    
    printf("Popped element: %d\n", pop(&stack));
    display(stack);
    
    printf("Top element: %d\n", peek(stack));
    
    return 0;
}