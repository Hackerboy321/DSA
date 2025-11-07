#include <iostream>
using namespace std ; 

int dmafunc() 
{
    int size; 
    int *ptr = new int[size] ;
    cout<<"enter the size array " ; 
    cin>>size; 
    for( int i  = 0 ; i < size ; i++) 
    {
        ptr[i] = i ; 
        cout<<ptr[i] ; 
    } 
delete [] ptr ; // so here we have to disalocate ( i.e free ) the memory by deleting it 
                // form heap. 
return 0 ; 
}

int main()
{
    dmafunc() ; 
    return 0 ; 
}

/*when we allocate memory in heap and forget to delete it when the memory leak 
problem occure so what happen exacally when the function return the value after it 
get delete from the stack memory and pointer also get deleted which is pointing 
towards the memory address of that array or variable in heap memory .
so the array we created in heap memory we can't access it cause the pointer is delete
so this situation is called the memory leak .
To avoid this problem use "delete" keyword  to delete the array or variable from heap 
memory before the function returns it's value*/