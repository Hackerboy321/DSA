#include <iostream>
using namespace std ; 

/*
               ✅ Static Memory Allocation:

- Memory size is fixed at compile time.
- Memory is allocated on the stack.
- Although can wirte like arr[size] and can take input from the user at run time
  but this is nit allowed in c++ some.
- This is called a Variable Length Array, and:
- It is NOT part of standard C++.
- Some compilers like GCC allow it as an extension, 
  but it's not portable or proper C++ practice.
- Memory is allocated on the stack, not the heap.
- It's risky for large arrays because stack has limited memory.
- In stack the memory we alocated it get automaticlly deleted by the compiler after 
  returing the fuction. 
*/
int Staticfunc() 
{
  int size = 5; 
  int arr[size] = {1,2,3,4,5} ; 
  return 0 ; 
}

/*

                 ✅ Dynamic Memory Allocation

 Dynamic memory location means we can alocate the memory at run time.
here we gonna use a key " new " to alocate a memory. 

- Memory created in Happens using new or malloc.
- Memory is allocated on the heap, not on the stack.
- In DMA the memory we allocated using new it not delete aumaticallly 
  so we need to delete that memory using the " detele datatype [ name of pointer ] "
*/
 int DMAfunc() 
{
    int size; 
    cout<<"enter the size array " ; 
    cin>>size; 
     int *arr = new int[size] ;
    for( int i  = 0 ; i < size ; i++) 
    {
        arr[i] = i ;
        cout<<arr[i] ; 
    } 
delete [] arr ; // so here we have to disalocate ( i.e free ) the memory by deleting it 
                // form heap. 
return 0 ; 
}

int main() 
{
  DMAfunc() ; 
  //Staticfunc() ; 
  return 0 ;
}