#include <bits/stdc++.h>
using namespace std;

int A[3][5], j; // j should not be globally declared and then used as an iterator.

void printRow (int row) {
  for (int i = 0; i < 5; ++i) {
    cout<<A[row][i] <<" ";
  }

  cout<<"\n";
}

int main() {
  for (int i = 0; i < 3; ++i) {
    printRow(i);
  }

  return 0;
}