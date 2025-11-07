#include <iostream>
using namespace std ;

void Binary_string(int n , string ans , int last_place ) 
{
    if(n== 0) 
    {
        cout<<ans<<endl;
        return ; 
    }

    if(last_place != 1)
    {
        Binary_string(n-1, ans + '1', 1 ) ;
        Binary_string(n -1 , ans + '0', 0) ;
    }

    else 
    {
        Binary_string(n -1, ans+ '0', 0) ; 
    }
}

void Binary_string1(int n , string ans  ) 
{
    if(n== 0) 
    {
        cout<<ans<<endl;
        return ; 
    }

    if( ans[ans.size() -1 ] != '1')
    {
        Binary_string1(n-1, ans + '1' ) ;
        Binary_string1(n -1, ans + '0') ;
    }

    else 
    {
        Binary_string1(n -1, ans+ '0') ; 
    }
}

int main() 
{
    int n = 3 ; 
    string ans = "" ;
    int last_place = 0 ; 
    Binary_string1(n, ans) ;        
}