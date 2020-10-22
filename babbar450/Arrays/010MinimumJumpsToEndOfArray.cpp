#include <bits/stdc++.h>
using namespace std;
int arr[] = {1, 11, 10, 6, 9, 2, 6, 7, 6, 8, 9};

int minJumps(int arr[], int length) {
  if (length < 2) return 0;

  int jumps = INT_MAX;
  for (int i = length - 2 ; i >= 0; i--) {
    if (i + arr[i] >= length - 1) {
      int intermediateResult = minJumps(arr, i + 1);
      if (intermediateResult != INT_MAX) jumps = min(jumps, intermediateResult + 1);
    }
  }
  
  return jumps;
}

int main() {
  int length = sizeof(arr)/sizeof(arr[0]);
  int minimumJumps = minJumps(arr, length);
  cout << "Minimum number of jumps " << minimumJumps << endl;
  return 0;
}