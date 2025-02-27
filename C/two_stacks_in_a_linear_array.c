#include <stdio.h>
#define size 10

int stack[size];
int top1 = -1, top2 = size;

void push1(int data) {
  if (top1 < top2 - 1) {
    stack[++top1] = data;

  } else {
    printf("Stack is Overflowing!");
  }
}

void push2(int data) {
  if (top1 < top2 - 1) {
    stack[--top2] = data;
  } else {
    printf("Stack is Overflowing!");
  }
}

int pop1() {
  if (top1 > 0) {
    return stack[top1--];
  }
  printf("stack is underflowing!");
  return -1;
}

int pop2() {
  if (top2 < size) {
    return stack[top2++];
  }
  printf("Stack is underflowing.");
  return -1;
}

int main() {
  push1(23);
  push1(34);
  push2(56);
  push2(34);
  push2(4);
  printf("Popped :  %d\n", pop1());
  printf("Popped :  %d\n", pop2());
}
