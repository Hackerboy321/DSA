#include <iostream>
using namespace std;
/* Object - An object is an instance of a class. It is a real
    entity that uses the structure and behavior defined by its class.

   Classes - A class is a blueprint or template for creating objects.
    It defines properties (data members) and behaviors (member functions)
    that the objects will have.

*/

class student                                      // this is a class.
{
    public :

     string name ; 
     int Roll_No ;                                // these are the properties ( data members )
     float Cgpa ; 

     void display()                               // this is behavior ( member function )
      {

        cout<<"Name = "<<name<<endl;
        cout<<"Roll_No = "<<Roll_No<<endl;
        cout<<"Cgpa = "<<Cgpa;
     }

} ;

int main()
{
    student s1;                                  //  an object  
      s1.name = "deepanshu" ; 
      s1.Roll_No = 1 ; 
      s1.Cgpa = 4.5 ;
      s1.display() ;

return 0 ; 
}