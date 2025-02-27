#include <stdio.h>
#include <string.h>
#define size 99

int stack[size];
int top = -1;

void push(char c) { stack[++top] = c; }

char pop() { return stack[top--]; }

void reverseString(char s[]) {
  int n = strlen(s);
  for (int i = 0; i < n; i++) {
    push(s[i]);
  }
  for (int i = 0; i < n; i++) {
    s[i] = pop();
  }
}
int main() {
  char s[] = "Vighnesh";
  reverseString(s);
  printf("Reverse String : %s\n", s);
}
