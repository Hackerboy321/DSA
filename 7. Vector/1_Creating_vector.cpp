#include <iostream>
#include <vector> 
using namespace std ;

int main() 
{
    // method 1 to create an array 
    vector<int> vec1 = { 1,2,3,4,5} ;

    // method 2 to create an array 
    vector<int> vec2(5,-1) ;

    for ( int i  = 0 ; i < vec2.size() ; i++) 
    {
        cout<<vec2[i] ; 
    }

    //3rd way to create an vector 
    vector<int> vec3 ; 
    

}