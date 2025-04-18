#include <bits/stdc++.h>

void sortedInsert(stack<int> &stack, int element) {
  // base case
    if(stack.empty() || (stack.top() < element)){
			stack.push(element);
			return;
	}

	int num = stack.top();
	stack.pop();
	sortedInsert(stack, element);
	stack.push(num);
	
	
}
void sortStack(stack<int> &stack) {
  // base case
  if (stack.empty()){
	  return;
  }

  int num = stack.top();
  stack.pop();

  sortStack(stack);

  sortedInsert(stack,num);
}