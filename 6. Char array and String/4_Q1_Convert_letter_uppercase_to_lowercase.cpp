#include <iostream>
#include <string.h>
using namespace std;

// this is the function to convert it into uppercase.
void uppercase(char arr[]) {

  for (int i = 0; i < strlen(arr); i++) {
    int nums = arr[i];
    if (nums >= 97) {
      int num = arr[i] - 'a';
      arr[i] = 'A' + num;
    }
  }
  cout << arr<<endl;
}

// this is the function to convert into lowercase.

void lowercase(char arr[]) {

  for (int i = 0; i < strlen(arr); i++) {
    int nums = arr[i];
    if (nums < 97) {
      int num = arr[i] - 'A';
      arr[i] = 'a' + num;
    }
  }
  cout << arr<<endl;
}

int main() {

  char arr[] = {"AppLe"};
  uppercase(arr);
  lowercase(arr);
  return 0;
}