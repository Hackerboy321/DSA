#include <iostream>
using namespace std ; 

// > Operator Overloading 

class complex 
{
    int real ;
    int img  ;  

    public:

        complex( int r , int i )
        {
            real = r ;

            img = i ;
        }

        void show()
        {
            cout<<real<<" + "<<img<<"i\n"; 
        }
            /* Operator overloading */
            
        void operator + (complex &obj2)
        {
            int real_no = this->real + obj2.real ; 
            int img_no = this->img + obj2.img ; 
            complex obj3(real_no,img_no) ;
            cout<<"new complex number = " ;
            obj3.show() ;  

        }

} ; 

int main()
{
    complex obj1(3,4) ; 
    complex obj2(1,2) ;

    obj1.show() ;
    obj2.show() ;
    obj1 + obj2 ; 

return 0 ; 
}