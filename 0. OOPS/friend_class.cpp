#include <iostream>
using namespace std; 

class A
{
    int x  = 10 ; 
    int y = 20 ;

    public:

    friend class B ; //  here B is friend class of A. 
};

class B
{
    public:

    void add( A &b)
    {
        int sum = b.x + b.y ; 
        cout<<sum ;
    }
};

int main()
{
    A a ;
    B b ;
    b.add(a);
}

