#include <iostream>
#include <vector>
using namespace std ;


int main() 
{
    vector<int> vec = {1,2,3,4,5,6} ; 
    int sum = 0  ;
    int product = 1 ; 
    for(int i = 0 ; i < vec.size() ; i++){

        sum += vec[i] ;
        product *= vec[i] ; 
    }

    cout<<"the sum = "<<sum<<endl<<"the product = "<<product<<endl ; 

}