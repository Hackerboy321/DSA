#include <iostream>
using namespace std;

// first approch with TC of O(n) ans SC OF O(1)

void pallandrom(int n) {
  if (n < 0) {
    cout << n << " is not pallandrom ";
  }

  int ans = 0;
  int ncopy = n;
  while (n) {
    int last_digit = n % 5;
    n /= 10;
    ans = ans * 10 + last_digit;
  }
  if (ans == ncopy) {
    cout << ncopy << " is pallandrom ";
  } else {
    cout << ncopy << " is not pallandrom ";
  }
}
//-----------------------------------------------------------------------------

// Second approch with the TC of O(n) and SC of O(n) ;

void pallandrom2(int n) {
  if (n < 0) {
    cout << n << "is not pallandrom";
  }

  string str = to_string(n);
  string copy_str = str;
  reverse(str.begin(), str.end());

  if (copy_str == str) {
    cout << n << " is pallandrom";
  }

  else {
    cout << n << " is not pallandrom ";
  }
}

int main() {
  int n = 121;
  // pallandrom(n);
  pallandrom2(n);
}