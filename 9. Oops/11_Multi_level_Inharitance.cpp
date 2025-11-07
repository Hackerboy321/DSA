#include <iostream>
using namespace std;

class continent {
public:
  void asia() { cout << "asia is biggest continent in the world \n"; }
};

class country : public continent {
public:
  void india() { cout << "india is in asia continent \n"; }
};

class state : public country {
public:
  void uttarakhand() { cout << "uttarakhand is in india\n"; }
};
int main() {
  state s1;
  s1.uttarakhand();
  s1.india(); // inharitate member function
  s1.asia();  // inharitate member function
}