#include <bits/stdc++.h>
using namespace std;

int arr1[] = {1, 3, 4, 5, 7};
int arr2[] = {2, 3, 5, 6};
// Union : {1, 2, 3, 4, 5, 6, 7} 
// Intersection : {3, 5}
int main() {
  int m = sizeof(arr1)/sizeof(arr1[0]);
  int n = sizeof(arr2)/sizeof(arr2[0]);
  int i = 0, j = 0;
  
  // Union
  cout << "Union:" << endl;

  while (i < m && j < n) {
    if (arr1[i] < arr2[j]) cout << arr1[i++] << " ";
    else if (arr1[i] > arr2[j]) cout << arr2[j++] << " ";
    else {
      cout << arr1[i++] << " ";
      j++;
    }
  }

  while (i < m) cout << arr1[i++] << " ";
  while (j < n) cout << arr2[j++] << " ";

  cout << endl;

  // intersection
  cout << "Intersection:" << endl;

  i = 0; j= 0;

  while (i < m && j < n) {
    if (arr1[i] < arr2[j]) i++;
    else if (arr1[i] > arr2[j]) j++;
    else {
      cout << arr1[i++] << " ";
      i++; j++;
    }
  }
  
  cout << endl;

  return 0;
}