#include <iostream>
using namespace std ;


class parent 
{
    public:
        virtual void show()
        {
            cout<<"calling of parent class " ; 
        }

};

class child : public parent 
{
     

    public:
        void show()
        {
            cout<<"calling of child class"; 
        }

}; 

int main()
{
    child c1;
        parent *ptr ; // ptr is a pointer which points the object of the parent class or points the object of the drived class of parent class 
        ptr = &c1;  // a parent type pointer is pointing to child class object 
        ptr->show() ;  // calling of child show() function, due to the verture function. 
    return 0 ;     
}