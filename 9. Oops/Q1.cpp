#include <iostream>
using namespace std;

/*
Create a User class with properties: id (private), username (public)
& password (private).Its id should be initialized in a parameterised
constructor.It should have a Getter & Setter for password.
*/

class user {
private:
  int id;
  string password;

public:
  string username;

  user(int id) { this->id = id; }

  // getter
  string getpassword() { return password; }

  // setter
  void setpassword(string password) { this->password = password; }
};

int main() {
  user user1(100);
  user1.username = "deepanshu ";
  cout << "The username of the user = " << user1.username << endl;
  user1.setpassword("12345");
  cout << "The password of user = " << user1.getpassword();
}