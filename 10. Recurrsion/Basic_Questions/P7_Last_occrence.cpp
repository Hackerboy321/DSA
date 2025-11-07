#include <iostream>
#include <vector>
using namespace std;

// recursive approch

int last_occure(vector<int> arr, int target, int i) {
  if (i == arr.size())
    return -1;

  int idx = last_occure(arr, target, i + 1);

  if (idx == -1 && arr[i] == target)
    return i;
  return idx;
}

// another approch

int search(vector<int> &arr, int target, int i) {
  if (i == 0)
    return -1;
  if (arr[i] == target)
    return i;

  return search(arr, target, i - 1);
}

int main() {
  int target = 5;

  vector<int> arr = {1, 2, 3, 4, 5, 5};
  int n = arr.size() - 1;
  cout << search(arr, target, n);
}