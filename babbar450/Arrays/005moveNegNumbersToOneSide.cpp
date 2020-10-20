#include <bits/stdc++.h>
using namespace std;

int arr[10] = {1, -2, 3, -4, -5, 6, 7, -8, 9, 10};

int nextNeg(int currentIndex) {
  for (int i = currentIndex; i < sizeof(arr)/sizeof(arr[0]); i++) {
    if (arr[i] < 0) return i;
  }
}

int nextPos(int currentIndex) {
  for (int i = currentIndex; i < sizeof(arr)/sizeof(arr[0]); i++) {
    if (arr[i] > 0) return i;
  }
}

int main() {
  int indexNeg = nextNeg(0), indexPos = nextPos(0);

  while ((indexNeg < sizeof(arr)/sizeof(arr[0])) || (indexPos < sizeof(arr)/sizeof(arr[0]))) {
    int temp = arr[indexNeg];
    arr[indexNeg] = arr[indexPos];
    arr[indexPos] = temp;

    indexPos = nextPos(indexPos + 1);
    indexNeg = nextNeg(indexNeg + 1);
  }

  for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) cout << arr[i] << " ";

  return 0;
}