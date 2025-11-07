#include <iostream>
using namespace std ;

/* function without argument and perameters */
void baisc() {

    cout<<"hello  world";

}
/* function with argument and perameters */
int num(int a , int b) /* perameters */ {

    return a+ b ;


}
int main() {

baisc();
cout<<num(4,5); /* arguments */
    return 0 ; 
}