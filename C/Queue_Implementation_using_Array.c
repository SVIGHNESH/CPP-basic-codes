#include <stdio.h>

int F = -1;  // Front pointer
int R = -1;  // Rear pointer
int isFull(int Q[],int n ){
    if(R == n-1){
        return 1;

    }
    else{
        return 0;
    }
    
}
int isEmpty(int Q[],int n ){
    if(F == -1){
        return 1;
    }
    else{
        return 0;
    }
}
void Enqueue(int Q[], int n, int x) {
    if (isFull(Q,n)) {  // Overflow condition
        printf("Queue is in Overflow\n");
        return;
    if (F == -1) {  // If queue is initially empty
    }
        F = R = 0;
    } else {
        R++;
    }
    Q[R] = x;
}

int Dequeue(int Q[], int n) {
    if (F == -1) {  // Underflow condition
        printf("Queue is Underflow\n");
        return -1;
    }

    int x = Q[F];

    if (F == R) {  // Reset queue when last element is dequeued
        F = R = -1;
    } else {
        F++;
    }

    return x;
}

void PrintQ(int Q[]) {
    if (F == -1) {
        printf("Queue is empty\n");
        return;
    }

    for (int i = F; i <= R; i++) {
        printf("%d ", Q[i]);
    }
    printf("\n");
}

int main() {
    int N = 5;
    int Q[5];

    Enqueue(Q, N, 10);
    Enqueue(Q, N, 20);
    Enqueue(Q, N, 30);
    Enqueue(Q, N, 40);

    PrintQ(Q);

    Dequeue(Q, N);
    PrintQ(Q);

    return 0;
}
//this is the just the begining