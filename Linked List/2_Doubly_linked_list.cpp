#include <iostream>
using namespace std ;

struct node 
{
    int data ; 
    node* prev ; 
    node* next ; 

    node(int value )
    {
        data = value ; 
        prev = NULL ; 
        next = NULL ; 
    }
};

class DoublyLinkedList
{
    public: 

    node* head = NULL ;
    node* tail = NULL ; 
    int numberOfNode = 0 ; 

    // For insertion of a node into the linked list. 

    // to insert a node at the beginning of the linked list. 
    void insertAtStart( int value )
    {
        if(head == NULL)
        {
            head = new node(value) ; 
            tail = head ; 
            cout<<value<<" is insertde\n" ;
            numberOfNode++ ;  
        }

        else
        {
            node* newNode = new node(value) ; 
            head->prev = newNode ; 
            newNode->next = head; 
            head = newNode ; 
            cout<<value<<" is inserted\n" ; 
            numberOfNode++ ; 
            
        }
    }

    // to insert a node at the end of the linked list.
    void insertAtEnd( int value )
    {
        if(head == NULL)
        {
            head =  new node(value) ; 
            tail = head ;
            cout<<value<<" is inserted\n" ;
            numberOfNode++ ; 
        }

        else
        {
            node* newNode = new node(value) ; 
            tail->next = newNode ; 
            newNode->prev = tail ; 
            tail = newNode ; 
            cout<<value<<" is inserted\n" ; 
            numberOfNode++ ; 
        }
    }

    // to insert a node at a particular position.
    void insertAtPosition( int value , int position ) 
    {
        // for checking is the position is valid or not.
        if(position < 1 || position > numberOfNode + 1 )
        {
            cout<<position<<" is invalid position\n"; 
            return ; 
        }

        //if the inserting position is start.
        if(position == 1 )
        {
            insertAtStart(value) ; 
            return ; 
        }

        //if the inserting position is end.
        if( position == numberOfNode+1)
        {
            insertAtEnd(value) ; 
            return ; 
        }

        node* temp = head ;

        for( int i  = 1 ; i < position - 1 ; i++) 
        {
            temp = temp->next ;
        }

        node* newNode = new node(value) ; 
        (temp->next)->prev = newNode ; 
        newNode->prev = temp ; 
        newNode->next = temp->next ; 
        temp->next = newNode ; 
        cout<<value<<" is inserted at "<<position<<" position\n";
        numberOfNode++ ;
     }



    // For deletion of a node from the linked list.

    //to delete a node at the beginning of the doubly  linked list.
    void deleteAtstart()
    {
        // if the doubly linked list is empty.
        if(head == NULL)
        {
            cout<<"Linked List is empty\n";
            return ;
        }

        // if there is only one node in doubly linked list.
        else if(head == tail)
        {
            node* temp = head ;  
            cout<<head->data<<" is deleted\n" ;
            head = NULL; 
            tail =NULL ;
            delete temp ;
            numberOfNode-- ; 

        }

        else
        {
            node* temp = head ; 
            head = head->next ;
            head->prev = NULL ; 
            cout<<temp->data<<" is deleted\n" ; 
            delete temp ;
            numberOfNode-- ;   
        }
    }

    //to delete a node at the end of the linked list.
    void deleteAtEnd()
    {
        // if the doubly linked list is empty.
        if(head == NULL)
        {
            cout<<"The Linked list is empty \n " ; 
            return ; 
        }

        //if the doubly linked list has only one node.
        else if(head == tail)
        {
            node* temp = head ;
            head = NULL ; 
            tail = NULL ;
            cout<<temp->data<<" is deleted\n"; 
            delete temp ;
            
            numberOfNode-- ; 
        }
        
        //if there is multiple node in doubly linked list.
        else
        {
            node* temp = tail ;
            tail= temp->prev ;
            tail->next  = NULL ;
            cout<<temp->data<<" is deleted\n";
            delete temp ; 
            numberOfNode-- ; 
        }
    }

    //to delete a node at the particular position of the linked list.
    void deleteAtPosition( int position)
    {
        //checking the position is valid or not.
        if(position >= 1 && position <= numberOfNode)
        {
            // if the deleting node position is start.
            if(position == 1)
            {
                deleteAtstart() ;
                return ; 
            }

            // if the deleting node is end node.

            else if( position == numberOfNode )
            {
                deleteAtEnd() ; 
                return ;
            }

            // if the deleting node is any particular node.
            else 
            {
                node* temp = head ;
                for (int i = 1; i < position; i++)
                {
                    temp = temp->next;
                }

                temp->prev->next = temp->next ;
                temp->next->prev = temp->prev ;
                cout<<temp->data<<" is deleted \n" ;
                delete temp ; 
                numberOfNode--; 
            }
        }

        else
        {
            cout<<position<<" is invalid\n" ; 
        }
    }


    // to traverse the linked list 

    void display()
    {
        if (head == NULL)
        {
            cout << "List is empty\n";
            return;
        }

        node* temp = head;
        while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    }

    void showHead()
    {
        if (head == NULL)
        {
            cout << "The list is empty.\n";
            return;
        }
        cout << "Head: " << head->data << endl;
        cout << "Tail: " << tail->data << endl;
        cout << "Number of nodes: " << numberOfNode << endl;
    }

};


int main()
{
    DoublyLinkedList List;
    List.insertAtEnd(10) ;
    List.insertAtEnd(20) ;
    List.insertAtEnd(30) ;
    List.insertAtEnd(40) ;
    List.insertAtEnd(50) ;

    List.display() ; 
    List.showHead();
    List.deleteAtstart() ; 
    List.display() ; 
    List.showHead();


}