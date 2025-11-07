/*
When we are creating a class (ex - class Node ) so here Node is kink of userdefine data type which store the 
the adderss of the next node in the linked list.
Just like int or float, now Node becomes a user-defined data type for your linked list. 

- so when we write Node *next - next is pointer which store the adderss of next node.  
i.e The next pointer has data type Node* because it must store the address of another 
Node object — and in C++, a pointer’s type must match the type of object it points to.


 */

#include <iostream>
using namespace std ;

class Node 
{

    public:

        int data ; 
        Node *next ;

        Node(int value )
        {
            data = value ; 
            next = NULL ; 
        }

};

int main()
{
    Node *Head = NULL ;
    Head = new Node(10) ; 
    cout<<Head->data<<endl ;
    cout<<Head->next; 

}