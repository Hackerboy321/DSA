#include <iostream>
using namespace std;

// This  is the bruteforce approch. time complexity is O(n2).

void b_f_approch(int arr[][3], int row, int col, int target) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      if (target == arr[i][j]) {
        cout << i << "," << j;
      }
    }
  }
}

// 2nd approch row wise binary search of time complexity of ( n * log(m) )

void binarySearch(int arr[][3], int row, int col, int key) {

  for (int i = 0; i < row; i++) {
    if (arr[i][0] <= key && arr[i][col - 1] >= key) {
      int start = 0;
      int end = col - 1;
      while (start <= end) {
        int mid = (start + end) / 2;
        if (arr[i][mid] == key) {
          cout << i << "," << mid;
          break;
        } else if (arr[i][mid] > key) {
          end = mid - 1;
        } else if (arr[i][mid] < key) {
          start = mid + 1;
        }
      }
    }
  }
}

// 3rd  " staircase approch " time complexity of O(n+m).

void stair_case(int arr[][4], int row, int col, int target) {

  int srow = 0, ecol = col - 1;

  while (srow < row && ecol >= 0) {

    int cell = arr[srow][ecol];

    if (cell == target) {
      cout << srow << " " << ecol;
      break;
    }

    else if (cell > target) {
      ecol--;
    }

    else if (cell < target) {
      srow++;
    }
  }
}

int main() {

  int target = 8;
  int arr[3][4] = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};

  // b_f_approch( arr , 3 , 3 , target ) ;
  // binarySearch(arr, 3, 4, target);
  stair_case(arr, 3, 4, target);

  return 0;
}