#include <iostream>
using namespace std;

// finding the pivit element choosing the last element as pivit .

int partision(int arr[], int start, int end) {
  int pos = start;
  for (int i = start; i <= end; i++) {
    if (arr[i] <= arr[end]) {
      swap(arr[i], arr[pos++]);
    }
  }
  return pos - 1;
}

void Quick_sort(int arr[], int start, int end) {
  if (start >= end) {
    return;
  }

  int pivit = partision(arr, start, end);

  Quick_sort(arr, start, pivit - 1); // left
  Quick_sort(arr, pivit + 1, end);   // right
}

int main() {
  int arr[] = {4, 6, 3, 7, 3, 8, 9, 1};
  int end = sizeof(arr) / sizeof(int) - 1, start = 0;
  Quick_sort(arr, start, end);

  for (int i = 0; i <= end; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}