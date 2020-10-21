#include <bits/stdc++.h>
using namespace std;

int arr[5] = {1, 2, 3, 4, 5};

int main() {
  if (sizeof(arr)/sizeof(arr[0]) < 2) {
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) cout << arr[i] << " ";

    cout << endl;

    return 0;
  }

  int prev = arr[0], next = arr[1];

  for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
    arr[(i+1) % (sizeof(arr)/sizeof(arr[0]))] = prev;
    prev = next;
    next = arr[(i+2)% (sizeof(arr)/sizeof(arr[0]))];
  }

  for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) cout << arr[i] << " ";

  cout << endl;

  return 0;
}