#include <iostream>
#include <string>
using namespace std ;

void removeDuplicate(string str , string ans , int* map , int i ) 

{
  if ( i == str.size() ) 
  {
    // This is the base condition i itrator if this i is equal to the size of 
    // of the matrix it's means we will be at the end of string. 
     
    cout<<ans<<endl; 
    return ; 
  }

  int mapIdx = str[i] - 'a' ; 
  
  // This is duplicate value we don't need to add this charactor to our ans ;  
  if(map[mapIdx]) removeDuplicate(str , ans , map, i+1) ;  

  else 
  {
    // This is the unique charactor so we add this to our ans string.
    map[mapIdx] = true ; 
    removeDuplicate(str, ans+str[i] , map, i+1) ; 

  }

}

string rem_dup(string str , string ans , int map[26])
{
  if(str.size() == 0) return ans ;

  int n = str.size() -1 ; 
  char ch = str[n] ; 
  int mapIdx = str[n] - 'a' ;
  str = str.substr(0 , n ) ; 

  if(map[mapIdx]) return rem_dup(str , ans , map) ;

  else 
  {
    map[mapIdx] = true ; 
    return rem_dup(str, ch+ ans  , map) ; 
  } 
  

}

int main() 
{

  string str = "cbacdcbc" ; 
  string ans = "" ; 
  int map[26] = {false} ; 

 // removeDuplicate(str, ans, map, 0) ;
  cout<<rem_dup(str ,ans , map) ; 

return 0 ; 

}

