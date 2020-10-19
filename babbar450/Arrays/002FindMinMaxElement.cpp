#include <bits/stdc++.h>
using namespace std;
int arr[] = {0, 2, 3, 4, 5, 6, 7, 8, 9, 10};

struct Pair {
  int min;
  int max;
};

Pair minMaxByLinearSearch(int arr[], int n) {
  Pair minMax;
  int i = 0;

  if (n == 1) {
    minMax.min = arr[0];
    minMax.max = arr[0];
    return minMax;
  }
  
  if(arr[0] > arr[1]) {
    minMax.min = arr[1];
    minMax.max = arr[0];
  } else {
    minMax.min = arr[0];
    minMax.max = arr[1];
  }

  for (int i = 0; i < n; i++) {
    if (arr[i] > minMax.max) minMax.max = arr[i];
    else if (arr[i] < minMax.min) minMax.min = arr[i];
  }
  
  return minMax;
}
int main() {
  Pair minMax = minMaxByLinearSearch(arr, sizeof(arr)/sizeof(arr[0]));
  cout << "Min: " << minMax.min << " Max: " << minMax.max << endl;
  return 0;
}