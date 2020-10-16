#include <bits/stdc++.h>
using namespace std;

int Stack[100], ind;

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

int main() {
  ind = 0;
  push(1);
  push(2);

  for(int index = 0; index < 100; index++) cout << Stack[index] << " "<<endl;

  cout <<"last index"<<Stack[99]<<endl;

  if (!isEmpty()) cout << top()<<endl;
  return 0;
}