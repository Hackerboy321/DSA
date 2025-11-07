#include <iostream>
using namespace std ;

class node 
{
    public:

    int data ; 
    node *next ;

    node( int value )
    {
        data = value ;
        next = NULL ; 
    }
};

node* insertAtEnd(int arr[] , int idx , int size )
{
    if( idx == size ) return NULL ;

    node* temp = new node(arr[idx]) ; 
    temp->next = insertAtEnd( arr , idx + 1 , size) ; 
    return temp ; 
 
}

node* insertAtStart( int arr[] , int idx, int size, node *prev)
{
    if( idx == size ) return prev ;

    node* temp = new node(arr[idx]) ; 
    temp->next = prev ;
    return insertAtStart(arr,  idx + 1, size, temp) ;
}

void display( node* head  )
{
    while(head != NULL )
    {
        cout<<head->data<<" "; 
        head = head->next ;
    }

    cout<<endl ;
}

int main()
{
    int arr[] = {10,20,30,40,50} ;
    int size = sizeof(arr)/sizeof(int)  ; 
    int idx = 0 ; 
    node *head = insertAtEnd(arr , idx , size) ; 
    node *head2 = insertAtStart(arr, idx , size , NULL) ; 
    display(head) ;
    display(head2) ; 
    cout<<head->data<<" "; 
    cout<<head2->data ;
}