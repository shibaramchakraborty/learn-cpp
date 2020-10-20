#include <bits/stdc++.h>
using namespace std;

int arr[10] = {0, 1, 2, 1, 2, 0, 2, 1, 0, 1};

int main() {
  int count0 = 0, count1 = 0, count2 = 0;

  for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
    if (arr[i] == 0) count0++;
    else if (arr[i] == 1) count1++;
    else if (arr[i] == 2) count2++;
  }

  cout << count0 << " " << count1 << " " << count2 << endl;
  for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
    int currentValueToAdd = 0;
    if (count0 > 0) {
      currentValueToAdd = 0;
      count0--;
    } else if (count1 > 0){
      currentValueToAdd = 1;
      count1--;
    } else if (count2 > 0) {
      currentValueToAdd = 2;
      count2--;
    }
    arr[i] = currentValueToAdd;
    cout << arr[i] << " ";
  }

  return 0;
}