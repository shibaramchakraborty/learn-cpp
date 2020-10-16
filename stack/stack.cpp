#include <bits/stdc++.h>
using namespace std;

int Stack[5], ind;

void push (int x) {
  ++ind;
  Stack[ind] = x;
}

bool isEmpty () {
  if (ind >= 1) return false;
  return true;
}

int top() {
  return Stack[ind];
}

int pop() {
  int val = Stack[ind];
  Stack[ind] = 0;
  --ind;
  return val;
}

int main() {
  ind = 0;
  push(1);
  push(2);

  for(int index = 0; index < 5; index++) cout << Stack[index] << " "<<endl;

  if (!isEmpty()) cout <<"Top value in stack: "<< top() << endl;

  pop();
  pop();

  for(int index = 0; index < 5; index++) cout << Stack[index] << " "<<endl;

  return 0;
}