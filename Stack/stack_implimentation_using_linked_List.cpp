#include <iostream>
using namespace std ;

// stack implimentation using linked list.
struct node 
{    
    int data ; 
    node* next ;

    node( int value )
    {
        data = value ;
        next = NULL ; 
    }
};

class stack 
{
    public:
    node* top = NULL ; 
    int size = 0 ; 

    // to push element into the stack.
    void push( int value )
    {
        node* newNode = new node(value) ; 

        if( top == NULL )
        {
            top = newNode  ; 
            cout<<value<<" is pushed\n";
            size++ ; 
        }

        else 
        {
            newNode->next = top ;
            top = newNode ; 
            cout<<value<<" is pushed\n";
            size++ ;  
        }
    }

    // to pop element into the stack.
    void pop()
    {
        if( isEmpty())
        {
            cout<<"stack is underflow\n"; 
        }

        else 
        {
            node* temp = top ; 
            top = top->next ;
            cout<<temp->data<<" is pop\n";
            delete temp ; 
            size-- ;  
        }
    }

    // to display the element of the stack
    void display()
    {
        if(isEmpty())
        {
           cout<<"stack is underflow\n";  
        }

        else 
        {
            node* temp = top ; 
            while( temp != NULL )
            {
                cout<<temp->data<<endl;
                temp = temp->next ;
            }
        }
    }

    // to display the size of the stack
    void isSize()
    {
        if(isEmpty())
        {
            cout<<"stack is underflow\n";  
        }

        else 
        {
            cout<<size<<" is the size of the stack\n"; 
        }
    }

    //to show the top of the stack.
    void peek()
    {   
        if(isEmpty())
        {
            cout<<"stack is underflow\n";  
        }

        else
        {
            cout<<top->data<<" is peek \n"; 
        } 
    }

    // to check the stack is empty or not.
    bool isEmpty()
    {
        return top == NULL ; 
    }
};

int main()
{
    stack s ;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.display();
    s.pop();
    s.display();
    s.peek(); 
}