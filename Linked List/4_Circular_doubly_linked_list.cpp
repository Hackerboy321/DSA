#include <iostream>
using namespace std ; 

struct node
{
    int data ;
    node* next ; 
    node* prev ; 

    node(int value )
    {
        data = value ; 
        next = NULL ; 
        prev = NULL ;
    }
}; 

class LinkedList 
{
    public:
    node* head = NULL ; 
    node* tail = NULL ;
    int NumberOfNodes = 0 ;  

    // for inserting the node 

    // for inserting the node at the start.
    void insertAtStart(int value )
    {
        node* newNode = new node( value );

        if(head == NULL)
        {
            head = tail = newNode ; 
            head->prev = head ; // maintaining the circularity 
            head->next = head ; // maintaining the circularity 
            cout<<value<<" is inserted\n";
            NumberOfNodes++; 
        }

        else 
        {
            head->prev = newNode ; 
            newNode->next = head ; 
            head = newNode ; // for moving the head node at the start.
            tail->next = head ;  // maintaining the circularity
            head->prev = tail ;  // maintaining the circularity
            cout<<value<<" is inserted\n";
            NumberOfNodes++;

        }
    }

    
    // for inserting the node at the end. 
    void insertAtEnd(int value)
    {
        node* newNode = new node(value) ; 
        
        if(head == NULL)
        {
            head = tail = newNode ;
            head->next = head ; // maintaining the circularity  
            head->prev = head ; // maintaining the circularity 
            cout<<value<<" is inserted\n";
            NumberOfNodes++;
        }

        else 
        {
         
            tail->next = newNode ; 
            newNode->prev = tail ; 
            tail = newNode ;     // for moving the tail to the last node. 
            tail->next = head ; // maintaining the circularity 
            head->prev = tail ; // maintaining the circularity 
            cout<<value<<" is inserted\n";
            NumberOfNodes++;
        }

    }

    // for inserting the node at any specific position.
    void insertAtPosition( int value , int position )
    {
        // for checking whather the position is valid or not.
        if(position >= 1 && position <= NumberOfNodes + 1)
        {
            if( position == 1 )
            {
                insertAtStart(value)  ; 
                return ; 
            }

            else if( position == NumberOfNodes + 1 )
            {
                insertAtEnd(value) ; 
                return ; 
            }

            else 
            {
                node* temp = head ; 

                for(int i = 1 ; i < position - 1  ; i++ )
                {
                    temp = temp->next ; 
                }
                node* newNode = new node( value ) ; 
                temp->next->prev = newNode ; 
                newNode->next = temp->next ;
                newNode->prev = temp ; 
                temp->next = newNode ; 
                cout<<value<<" is inserted at "<<position<<endl;
                NumberOfNodes++;
            }

        }

        else
        {
            cout<<position<<" is invalid\n"; 
        }
    }

    // for deleting the node from the doubly circular linked list.

    // for deleting the node from the start.
    void deleteAtStart()
    {
        // if the linked list empty.
        if(head == NULL)
        {
            cout<<"The Linked List Empty\n"; 
            return ; 
        }

        // if there is only one node.
        else if( head == tail )
        {
            cout<<head->data<<" is deleted\n"; 
            delete head ; 
            head = tail = NULL ;
            NumberOfNodes--;
            return ;
        }

        // if there is multiple node.
        else 
        {
            node* temp = head ;
            head = temp->next ;
            head->prev = tail ; // maintaining the circularity 
            tail->next = head ; // maintaining the circularity 
            cout<<temp->data<<" is deleted\n" ; 
            delete temp ;
            NumberOfNodes--; 

        }
    }

    // for deleting the node from the end.
    void deleteAtEnd()
    {
        // if the linked list empty.
        if(head == NULL)
        {
            cout<<"The Linked List Empty\n"; 
            return ; 
        }

        // if there is only one node.
        else if( head == tail )
        {
            cout<<head->data<<" is deleted\n"; 
            delete head ; 
            head = tail = NULL ;
            NumberOfNodes--;
            return ;
        }

        else
        {
            node* temp = tail ; 
            tail = temp->prev ;
            tail->next = head ;  // maintaining the circularity
            head->prev = tail ;  // maintaining the circularity
            cout<<temp->data<<" is deleted\n" ; 
            delete temp ;
            NumberOfNodes--; 
        }

    }

    // for deleting the node from the specific position.
    void deleteAtPosition(int position)
    {
        if( position >= 1 && position <= NumberOfNodes )
        {
            if(position == 1 )
            {
                deleteAtStart() ; 
                return ; 
            }

            else if (position == NumberOfNodes) 
            {
                deleteAtEnd() ; 
                return ; 
            }

            else 
            {
                node* temp = head ;
                
                for( int i = 1 ; i < position ; i++)
                {
                    temp =  temp->next ; 
                }
                temp->next->prev = temp->prev ;
                temp->prev->next = temp->next ;
                cout<<temp->data<<" is deleted\n";
                delete temp ; 
                NumberOfNodes-- ;
            }

        }

        else 
        {
            cout<<position<<" is invalid\n"; 
        }

    }

    // for traverses and printing the ndoe.
    void display()
    { 
        if(head == NULL)
        {
            cout<<"The Linked list is empty \n";
        }

        else 
        {
            node* ptr = head ; 
            do
            {
                cout<<ptr->data<<" "; 
                ptr = ptr->next ; 
            } 
            while (ptr != head) ;
            
            cout<<endl ; 
            
        }

    }

    // for showing the head and tail for the linked list.
    void showhead()
    {
        if(head == NULL)
        {
            cout<<"The Linked list is empty\n";
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
    List.insertAtEnd(20);
    List.insertAtEnd(30); 
    List.insertAtEnd(40); 
    List.insertAtEnd(50);
    List.display() ; 
    List.showhead() ; 
    List.insertAtStart(10) ; 
    List.display();
    List.insertAtPosition(10,3);
    List.display(); 
    List.showhead();
    List.deleteAtPosition(3);
    List.display();

     
}