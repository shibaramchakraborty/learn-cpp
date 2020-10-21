#include <bits/stdc++.h>
using namespace std;

int arr[5] = {1, 2, 3, 4, 5};

int main() {
  int temp1 = arr[0];
  int temp2 = 0;

  for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
    temp2 = arr[(i+1) % sizeof(arr)/sizeof(arr[0])];
    cout << temp1 << temp2 << endl;
    arr[(i+1) % sizeof(arr)/sizeof(arr[0])] = temp1;
    temp1 = temp2;
  }


  for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) cout << arr[i] << " ";

  cout << endl;

  return 0;
}