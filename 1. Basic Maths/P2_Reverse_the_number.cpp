#include <algorithm>
#include <string>
using namespace std;

// 1st approch shifing  last digit

int reverse1(int n) {
  int ans = 0;
  while (n) {
    int last_digit = n % 10;
    n /= 10;
    ans = ans * 10 + last_digit;
  }
  return ans;
}

//------------------------------------------------------------------

// 2nd approch is by converting int string

// int reverse2(int x) {
//   bool check = x < 0;
//   string str = to_string(abs(x));
//   reverse(str.begin(), str.end());
 
//   try {
//     int ans = stoi(str);

//     if (check) {
//       return -ans;
//     } else {
//       return ans;
//     }

//   }

//   catch (out_of_range & e) {
//     return 0;
//   }
// }

//-------------------------------------------------------------------------


int main() {
  int n = 34353621;
  //cout << reverse2(n);
  //cout<<reverse1(n) ; 
}