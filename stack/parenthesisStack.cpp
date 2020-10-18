#include <bits/stdc++.h>
using namespace std;

char Stack[5], ind;
string open[3];
string close[3];


void push (char x) {
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
  char val = Stack[ind];
  Stack[ind] = 0;
  --ind;
  return val;
}

int main() {
  string testString = "([{]]";

  for (int i = 0; i < testString.length(); ++i) {
    char testChar = testString.at(i);
    if(testChar == '(' || testChar == '[' || testChar == '{') {
      push(testChar);
    } else if(testChar == ')' || testChar == ']' || testChar == '}') {
      if (isEmpty()) {
        cout<<"false"<<endl;
        return 0;
      } else {
        pop();
      }
    }
  }

  if(isEmpty()) cout << "true" << endl;
  else cout<<"false"<<endl;

  return 0;
}