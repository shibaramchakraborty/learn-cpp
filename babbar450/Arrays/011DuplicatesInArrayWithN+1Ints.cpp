#include <bits/stdc++.h>
using namespace std;
int nums[] = {1, 3, 4, 2, 2};
// 3 methods: sorting, sets, hare and tortoise method.
int findDuplicateUsingSets (int arr[], int length) {
  if (!length) return NULL;

  unordered_set<int> setWithoutDuplicates;
  int actualSum = 0;

  for (int i = 0; i < length; i++) {
    cout << "inserting: " << arr[i] << endl;
    actualSum += arr[i];
    setWithoutDuplicates.insert(arr[i]);
  }

  int setSum = 0;
  unordered_set<int>::iterator i;

  for (i = setWithoutDuplicates.begin(); i != setWithoutDuplicates.end(); i++) {
    setSum += (*i);
  }

  cout << "actual sum: " << actualSum << endl;

  return actualSum - setSum;
}

int findDuplicateUsingHareTortoiseMethod(int arr[], int length) {
  int hare = arr[0];
  int tortoise = arr[0];

  do {
    tortoise = arr[tortoise];
    hare = arr[arr[hare]];
  } while (hare != tortoise);

  tortoise = arr[0];

  while (tortoise != hare) {
    tortoise = arr[tortoise];
    hare = arr[hare];
  }

  return hare;
}
int main() {

  cout<< "Duplicate with Set method is:"<<" "<< findDuplicateUsingSets(nums, sizeof(nums)/sizeof(nums[0])) << endl;
  cout<< "Duplicate with hare and tortoise method is:"<<" "<< findDuplicateUsingHareTortoiseMethod(nums, sizeof(nums)/sizeof(nums[0])) << endl;
  return 0;
}