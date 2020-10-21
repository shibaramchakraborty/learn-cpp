#include <bits/stdc++.h>
using namespace std;
int arr[] = {3, 9, 12, 16, 20};
int K = 3;

int main() {
  int arrLength = sizeof(arr)/sizeof(arr[0]);
  if (arrLength == 1) {
    cout << "minimized difference = 0" << endl;
    return 0;
  }

  sort(arr, arr + arrLength);

  int ans = arr[arrLength - 1] - arr[0];

  int small = arr[0] + K;
  int big = arr[arrLength - 1] - K;

  if (small > big) swap(small, big);

  for (int i = 1; i < arrLength - 1; i++) {
    int subtract = arr[i] - K;
    int add = arr[i] + K;

    if (subtract >= small || add <= big) continue;

    if (big - subtract <= add - small) small = subtract;
    else big = add;
  }

  cout << "minimized difference = " << min(ans, big - small) << endl;
}