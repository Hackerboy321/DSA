#include <iostream>
using namespace std ;

// Implimentation of stack using array.

class stack 
{
    public:
    int *arr ; 
    int size ; 
    int top ; 

    stack( int n )
    {
        size = n ; 
        top = - 1 ;
        arr = new int[size] ; 
    }

    //to push the value in the stack 
    void push(int value)
    {
        top++ ; 
        arr[top] = value ; 
        cout<<value<<" is pushed\n";
    }

    void display()
    {
        for(int i  = 0 ; i < top ; i++ )
        {
            cout<<arr[i]<<endl ; 
        }
    }

    void peek()
    {
        if(top == - 1 )
        {
            cout<<"stack is empty \n" ; 
        }

        else 
        {
            cout<<"The peek is "<<top;
        }
    }

    bool isEmpty()
    {
        if(top == -1 ) return true ;

        else return false ; 

    }
}; 


int main()
{
    stack s(10);
    s.push(10) ; 
    s.push(20) ; 
    s.push(30) ; 
    s.push(40) ; 
    s.push(50) ;
    s.display() ;  
}