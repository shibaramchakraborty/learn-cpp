#include <bits/stdc++.h>
using namespace std;

int arr[11] = {-9, 1, -2, 3, -4, -5, 6, 7, -8, 9, 10};

void shiftall(int arr[], int left, int right) {
  //left pointer start from the begining of the array while right from the end.
  while (left < right) {
    if(arr[left] < 0 && arr[right] > 0) left++;
    else if (arr[left] > 0 && arr[right] < 0) {
      swap(arr[left], arr[right]);
      left++;
      right--;
    } else if (arr[left] > 0 && arr[right] > 0) right --;
    else {
      left++;
      right--;
    }
  }
}

void print(int arr[], int length) {
  for (int i = 0; i < length; i++) cout << arr[i] << " ";
  cout << endl;
}

int main() {
  shiftall(arr,0, sizeof(arr)/sizeof(arr[0]));
  print(arr, sizeof(arr)/sizeof(arr[0]));

  return 0;
}