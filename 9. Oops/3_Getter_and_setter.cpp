#include <iostream>
using namespace std ;
/*
Getter and Setter in OOPs

🔹 What are they?
Getter: A function that returns the value of a private variable.
Setter: A function that sets or updates the value of a private variable.

🔹 Why are they used?
To access and modify private data safely.
To protect internal variables from direct changes (OOP principle: Encapsulation).
To add validation while setting values.*/
class student 
{
    private :

      int age ;

    public :
    // setter 
       void setage(int num )
       {
         age = num ; 
       }
    // getter 
       int getage()
       {
        return age ;
       } 

} ; 

int main() 

{
    student s1 ; 
        s1.setage(22) ; 
        cout<<s1.getage() ;

    return 0 ; 
}