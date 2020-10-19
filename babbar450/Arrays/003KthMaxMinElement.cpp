#include <climits>
#include <bits/stdc++.h>
using namespace std;

int k = 3;
// Method 1: sort and return length k-1 th element O(n^2)
// Method 2: Min Heap - HeapSelect O(n + KLogn)
// Mehtod 3: Max Heap O(k + (n-k)Logk)
// Mehtod 4: QuickSelect O(n) - Average case, worst case: O(n^2)
struct Pair {
  int kthMin;
  int kthMax;
};

Pair sortAndGetMinMax(int arr[], int arrLength) {
  Pair method1;
  sort(arr, arr + arrLength);
  method1.kthMin = arr[k - 1];
  method1.kthMax = arr[arrLength - k - 1];

  return method1;
}

Pair minHeapHeapSelectMinMax(int arr[], int arrLength) {

}

int main() {
  int arr[] = {0, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  Pair kthMinMaxMethod1 = sortAndGetMinMax(arr, sizeof(arr)/sizeof(arr[0]));
  cout <<"Method1: sort and get => K = "<< k <<" KthMin:"<< kthMinMaxMethod1.kthMin << " KthMax: "<< kthMinMaxMethod1.kthMax << endl;
}