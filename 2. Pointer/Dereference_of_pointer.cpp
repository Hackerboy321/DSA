#include <iostream>
using namespace std ;

int main(){
int a = 10 ;
int* ptr = &a ; 
int** ptr1 = &ptr;
cout<< &a<<endl;
cout<<ptr<<endl;
cout<<*ptr<<endl;
cout<<ptr1<<endl;
cout<<*ptr1<<endl;
cout<<**ptr1;
    return 0 ;
}