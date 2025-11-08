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
}; 

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
            tail = head ;
            head->next = head ; // for circular linked list
            cout<<value<<" is inserted\n"; 
            NumberOfNodes++;

        }

        // if linked list has some node.
        else
        {
            node* newNode = new node(value) ; 
            newNode->next = head ; 
            head = newNode ; 
            tail->next = head ; // for circular linked list 
            cout<<value<<" is inserted\n"; 
            NumberOfNodes++ ;
        }
    }

    // for inserting a node into the end of the circular linked list.
    void insertAtEnd( int value )
    {
        if(head == NULL )
        {
            head = new node(value) ; 
            tail = head ;
            head ->next = head ; // for circular linked list.
            cout<<value<<" is inserted\n"; 
            NumberOfNodes++;
        }

        else
        {
            node* newNode = new node(value) ;
            tail->next = newNode ; 
            tail = newNode ; 
            tail->next = head ; // for circular lisnked list.
            cout<<value<<" is inserted\n" ;
            NumberOfNodes++ ;
        }
    }

    // for inserting the node at any specific position. 
    void insertAtPosition( int value, int position )
    {
        // for checking the position is valid or not.
        if( position >= 1 && position <= NumberOfNodes + 1 ) 
        {
            // if the insertion position is start.
            if(position == 1 )
            {
                insertAtStart( value );
                return ; 
            }

            // if the inserting position is end.
            else if (position == NumberOfNodes + 1 )
            {
                insertAtEnd( value );
                return ;   
            }

            else 
            {
                node* temp  = head ; 
                for( int i = 1 ; i < position - 1 ; i++ )
                {
                    temp = temp->next ;
                }

                node* newNode = new node(value);
                newNode->next = temp->next ;
                temp->next = newNode ; 
                cout<<value<<" is inserted in "<<position<<" position \n";
                NumberOfNodes++ ; 
            }
        }

        else 
        {
            cout<<" invalid position \n" ; 
        }
        

    }

    // for deleting the node from the linked list.

    // for deleting the node from the start of the linked list.
    void deleteAtStart()
    {
        if(head == NULL)
        {
            cout<<"linked list is empty\n";
        }

        else if (head == tail)
        {
            cout << head->data << " is deleted\n";
            delete head;
            head = tail = NULL;
            NumberOfNodes--;
            return;
        }


        else
        {
            node* temp = head ;
            head = head->next ;
            tail->next = head ; // for maintaining the circularity.
            cout<<temp->data<<" is deleted \n"; 
            delete temp ; 
            NumberOfNodes--;
        }

    }

    // Deletes the last node from a circular singly linked list
    void deleteAtEnd()
    {
        if (head == NULL)
        {
            cout << "Linked list is empty\n";
        }
        else if (head == tail) // Only one node
        {
            cout << head->data << " is deleted\n";
            delete head;
            head = tail = NULL;
            NumberOfNodes--;
        }
        else
        {
            node* temp = head;
            while (temp->next != tail) // Traverse to second-last node
            {
                temp = temp->next;
            }

            cout << tail->data << " is deleted\n";
            delete tail;
            tail = temp;
            tail->next = head; // Maintain circular link
            NumberOfNodes--;
        }
    }


    // for deleting the node from any specific position.
    void deleteAtPosition( int position )
    {
        // for checking the position is valid or not.
        if( position >= 1 &&  position <= NumberOfNodes) 
        {
            if(position == 1 )
            {
                deleteAtStart(); 
                return ; 
            }

            else if (position == NumberOfNodes )
            {
                deleteAtEnd();
                return ;
            }

            else 
            {
                node* curr = head ;
                node* prev = NULL ; 

                for ( int i = 1 ; i < position ; i++)
                {
                    prev = curr ; 
                    curr = curr->next ;
                }

                prev->next = curr->next ;
                cout<<curr->data<<" is deleted\n";
                delete curr ;  
                NumberOfNodes-- ;               
            }
        }

        else 
        {
            cout<<position<<" is invalid position\n"; 
        }

    }

    // Traverses and prints all nodes in a circular singly linked list
void display()
{
    if (head == NULL)
    {
        cout << "The circular linked list is empty\n";
        return;
    }

    node* ptr = head;
    do
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    } 
    while (ptr != head); // Loop until we circle back to head

    cout << endl;
}

    // for printing the head and tail of the linked list.
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
        List.insertAtStart(10) ;
        List.insertAtStart(20) ;
        List.insertAtStart(30) ;
        List.insertAtStart(40) ;
        List.insertAtStart(50) ;
        List.display();
        List.showhead() ; 
        List.deleteAtPosition(2);
        List.deleteAtPosition(1);
        List.deleteAtPosition(3) ; 
        List.display() ; 
        List.showhead() ; 
         
}

