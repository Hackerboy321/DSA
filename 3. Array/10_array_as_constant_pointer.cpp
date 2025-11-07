#include <iostream>
using namespace std ; 

int main() {

    int arr[] = {1,2,3,4,5};
    cout<<*arr<<endl; /*so here the arr is a cosntant pointer of index 0 
                     which means we can access the 0th index of the arr
                        by dereferancing this constant pointer*/
    cout<<arr; 

    return 0 ;
}
/*and constant pointer means normally we can modify a pointer but in this 
case we can't modify this pointer value.*/