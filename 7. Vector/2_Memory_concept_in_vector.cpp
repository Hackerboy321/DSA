#include <iostream>
#include <vector>
using namespace std ;

int main() 
{
    vector<int> vec = {1,2,3} ;
    cout<<"size of vector before adding element = "<<vec.size()<<endl; // 3
    cout<<"capacity of vector before adding element = "<<vec.capacity()<<endl ; //3
    
    /*right now the capacity of this vector is 3 and size is also 3 .so if now we try 
    to add an element in vector so it's capacity will become dubble but size will inc.
    acc. to the no. of element add in the vector */

    vec.push_back(4) ;
    cout<<"size of vector after adding element = "<<vec.size()<<endl; // 4 cause we add only one element to the vector 
    cout<< "capacity  of vector after adding element = "<<vec.capacity()<<endl ; // will become dubble 6 cause it reach it capacity 
    
}
