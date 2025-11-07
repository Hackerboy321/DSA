#include <iostream>
using namespace std ;

/* # Function overriding 

 Function overriding is a feature in object-oriented programming where a
 derived class redefines a base class method with the same name and parameters 
 to provide a specific implementation.
 
 */

class parent 
{
    public:

        void show()
        {
            cout<<"calling of parent class\n"; 
        }
};

class chaild : public parent 
{
    public:

        void show()
        {
            cout<<"calling of chaild class\n" ;  
        }

};

int main()
{
    parent p1;
        p1.show();
    chaild c1 ;
        c1.show() ; 

}