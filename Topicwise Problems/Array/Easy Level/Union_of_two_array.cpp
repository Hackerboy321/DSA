#include <iostream>
#include <vector>
using namespace std ;

void unionn(vector<int> a , vector<int> b )
{
    vector<int> temp ; 
    int x = a.size() -1 ;
    int y = b.size() -1 ;
    int i = 0; 
    int j = 0; 

    while ( i <= x && j <= y )
    {
        if( a[i] < b[j]) 
        {
            temp.push_back(a[i++]) ;
        }
        else if ( a[i] > b[j]) 
        {
            temp.push_back(b[j++]) ; 
        }

        else 
        {
            temp.push_back(a[i]);
            i++; 
            j++ ; 
        }
    }
    cout<<i<<" "<<j<<endl;
    for(int i = 0 ; i < temp.size() ; i++) 
    {
        cout<<temp[i]<<" "; 
    }
}

int main()
{
    vector<int> a = {2,3,4,5,9,12} ;
    vector<int> b = {2,4,5,7,10} ;
    unionn(a, b) ; 
}