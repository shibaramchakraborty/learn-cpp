#include <bits/stdc++.h>
using namespace std;

int main() {
  int A[7] = {5, 2, 3, 4, 2, 6, 7};

  sort(begin(A), end(A));

  for (int i = 0; i < sizeof(A)/sizeof(A[0]); i++) cout << A[i] << endl;

  return 0;
}