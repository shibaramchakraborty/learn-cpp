#include <bits/stdc++.h>
using namespace std;

int Queue[5];
int backInt = -1;
int frontInt = 0;

void push(int x) {
  ++backInt;
  Queue[backInt] = x;
}

void pop() {
  Queue[frontInt] = 0;
  ++frontInt;
}

bool isEmpty() {
  if (backInt < frontInt) return true;
  else return false;
}

int main() {

  return 0;
}