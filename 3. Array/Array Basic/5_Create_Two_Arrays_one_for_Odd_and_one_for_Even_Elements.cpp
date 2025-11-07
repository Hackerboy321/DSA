#include <iostream>
#include <vector>
using namespace std;

void Odd_Even(vector<int> arr) {
  vector<int> odd;
  vector<int> even;

  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] % 2 == 0)
      even.push_back(arr[i]);

    else
      odd.push_back(arr[i]);
  }

  cout << "odd Number are = ";
  for (int i = 0; i < odd.size(); i++) {
    cout << odd[i] << ",";
  }
  cout << endl;

  cout << "even Number are = ";
  for (int i = 0; i < even.size(); i++) {
    cout << even[i] << ",";
  }
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  Odd_Even(arr);
}