#include <iostream>
using namespace std ;

// singly circular linked list.

struct node 
{
    int data ; 
    node* next ;

    node(int value )
    {
        data = value ; 
        next = NULL ; 
    }
} ; 

class LinkedList
{
    public:
    node* head = NULL ; 
    node* tail = NULL ;
    int NumberOfNodes = 0 ; 

    // for inserting a node into the circular linked list.

    // for inserting a node into the start of the linked list.
    void insertAtStart(int value)
    {
        // if the linked list is empty
        if(head == NULL)
        {
            head = new node(value) ; 
            head = tail ;
            NumberOfNodes++;
        }

        // if linked list has some node.
        else
        {
            node* newNode = new node(value) ; 
            newNode->next = head ; 
            head = newNode ; 
            NumberOfNodes++ ;
        }
    }

    // for inserting a node into the end of the circular linked list.
    void insertAtEnd( int value )
    {

    }

    // for inserting the node at any specific position. 
    void insertAtPosition( int value )
    {

    }

    // for deleting the node from the linked list.

    // for deleting the node from the start of the linked list.
    void deleteAtStart( int value )
    {

    }

    // for deleting the node from the end of the linked list.
    void deleteAtEnd( int value )
    {

    }

    // for deleting the node from any specific position.
    void deleteAtPosition( int value )
    {

    }

    // for traversing the circular linked list.
    void display()
    {
        node* temp  = head ; 
        while(temp != NULL )
        {
            cout<<temp->data<<" "; 
            temp = temp->next ;
        }
        cout<<endl;
    }

    // for printing the head and tail of the linked list.
    void showhead()
    {
        if(head == NULL)
        {
            cout<<"The circular linked list\n";
            return ;
        }
        else
        {
            cout<<head->data<<" is the head of the linked list\n";
            cout<<tail->data<<" is the tail of the linked list\n" ; 
            cout<<NumberOfNodes<<" Number of node is in the linked list\n"; 
        }
    }
};

int main()
{
    LinkedList List;
        List.insertAtStart(10) ;
        List.insertAtStart(20) ;
        List.insertAtStart(30) ;
        List.insertAtStart(40) ;
        List.insertAtStart(50) ;
}

