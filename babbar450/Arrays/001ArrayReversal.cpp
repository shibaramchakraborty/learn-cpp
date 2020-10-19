#include <bits/stdc++.h>
using namespace std;
int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int main() {
  int i = 0;
  int arrLength = sizeof(arr)/sizeof(arr[0]);

  while (i < (arrLength - i)) {
    int temp = arr[i];
    arr[i] = arr[arrLength - i - 1];
    arr[arrLength - i - 1] = temp;
    i++;
  }

  for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) cout << arr[i] << " ";

  cout << endl;

  return 0;
}