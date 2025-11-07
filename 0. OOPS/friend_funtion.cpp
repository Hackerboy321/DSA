#include <iostream>
using namespace std ;

class addition 
{
    int a, b ;

    public:

    addition(int a , int b)
    {
        this->a = a ; 
        this->b = b ;
    }

    friend int addNum(addition &k) ; // diclaration of friend function.
};

int addNum(addition &k) // function defination 
{
    return(k.a + k.b); 
}

int main()
{
    addition a(10,20) ;
    int sum = addNum(a) ; // calling of the friend function. 
    cout<<sum ; 
}