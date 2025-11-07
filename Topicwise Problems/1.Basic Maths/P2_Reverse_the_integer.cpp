#include <iostream>
using namespace std;

int reverse_number(int n) {
  int sum = 0;
  while (n) {
    int last_digit = n % 10;
    sum = sum * 10 + last_digit;
    n /= 10;
  }

  return sum;
}

int main() {
  int n = 35654745 ;
  cout<<reverse_number( n ) ; 

}