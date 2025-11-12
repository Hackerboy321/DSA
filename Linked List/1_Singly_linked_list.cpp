#include <iostream>
using namespace std;

// This is the complete implimentation of singly linked list.

struct node
{
    int data;
    node *next;

    node(int value)
    {
        data = value;
        next = NULL;
    }
};

class LinkedList
{
public:
    node *head = NULL;
    node *tail = NULL;
    int NumberOfNode = 0;

    // insertion in linked list at the end
    void insertAtEnd(int value)
    {
        node *newNode = new node(value);
        if (head == NULL)
        {
            head = tail = newNode ; 
            cout << value << " is inserted in linked list\n";
            NumberOfNode++;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
            cout << value << " is inserted in linked list\n";
            NumberOfNode++;
        }
    }

    // insertion in the linked list at the start
    void insertAtStart(int value)
    {
        node *newNode = new node(value);
        if (head == NULL)
        {
            head = tail = newNode ;
            cout << value << " is inserted in linked list\n";
            NumberOfNode++;
        }

        else
        {
            newNode->next = head;
            head = newNode;
            cout << value << " is inserted in linked list\n";
            NumberOfNode++;
        }
    }

    // insertion in the linked list at particular position
    void insertAtPosition(int value, int position)
    {
        //for checking is position is valid or not.
        if(position >= 1 && position <= NumberOfNode + 1 )
        {
             //if position of insertion is start.
            if(position == 1 )
            {
                insertAtStart(value);
                return ; 
            }

            //if the position of insertion is end.
            else if(position == NumberOfNode +1 )
            {
                insertAtEnd(value);
                return ; 
            }

            else
            {
                node* temp = head ; 

                for( int i = 1 ; i < position -1 ; i++)
                {
                    temp = temp->next ;
                }

                node* newNode = new node(value) ; 
                newNode->next = temp->next ; 
                temp->next = newNode ; 
                cout<<value<<" is inserted in "<<position<<" position \n";
                NumberOfNode++;
            } 
        }

        else
        {
            cout<<"invalid position\n";
        }
    }

    // for deleting the last node.
    void deleteAtEnd()
    {
        // when the linked list is empty.
        if (head == NULL)
        {
            cout << "Linked List is Empty\n";
        }

        // if the linked list has only one node.
        else if (head == tail)
        {
            cout<<head->data<<" is deleted \n";
            delete head ;
            head = tail = NULL ; 
            NumberOfNode--;
        }

        // when the linked list has the multiple node.
        else
        {
            node* temp = head; 
            while(temp->next  != tail )
            {
                temp = temp->next ; // now the temp is at second last node.
            }

            cout<<tail->data<<" is deleted\n";
            delete tail ; 
            tail = temp ;
            tail->next = NULL ; 
            NumberOfNode--; 
        }
    }

    // for deleting the node from the start of the linked list.
    void deleteAtStart()
    {
         // when the linked list is empty.
        if ( head == NULL )
        {
            cout << "Linked List is Empty\n";
            return ;
        }

        // if the linked list has only one node.
        else if(head == tail )
        {
            cout<<head->data<<" is deleted \n";
            delete head ;
            head = tail = NULL ; 
            NumberOfNode--;
        }

        // if there is multiple nodes. 
        else
        {
            node* temp = head ;
            head = head->next ; // move that head to the second which now new head.
            cout<<temp->data<<" is deleted\n"; 
            delete temp ; 
            NumberOfNode-- ; 
        }
    }

    // for deleting the particular node of the linked list.
    void deleteAtPosition(int position)
    {
        // the position should be in the range of linked list.
        if (position >= 1 && position <= NumberOfNode)
        {
            // if we to delete the first node of the linked list.
            if (position == 1)
            {
                deleteAtStart() ; 
                return ;
            }

            // if the position is the last node.
            else if ( position == NumberOfNode )
            {
                deleteAtEnd();
                return ;
            }

            //  if the position is any particular node.
            else 
            {
                node* curr = head ;
                node* prev = NULL ;

                for(int i = 1 ; i < position ; i++)
                {
                    prev = curr ; 
                    curr = curr->next ; 
                }

                prev->next = curr->next ;
                cout<<curr->data<<" is deleted\n" ;
                delete curr ;  
                NumberOfNode--;
            }
        }
       
        else 
        {
            cout << "invalid position \n";
        }
    }

// for searching the value in the linked list.
 int search(int key)
{
    node* temp = head;
    int position = 1;

    while (temp != NULL)
    {
        if (temp->data == key)
        {
            cout << key << " found at position " << position << endl;
            return position;
        }
        temp = temp->next;
        position++;
    }

    cout << key << " not found in the list." << endl;
    return -1;
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
            while (ptr != NULL) ;
            
            cout<<endl ; 
            
        }
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
        cout << "Number of nodes: " << NumberOfNode << endl;
    }
};

int main()
 {
    LinkedList List;
    List.insertAtEnd(10) ; 
    List.insertAtEnd(20) ; 
    List.insertAtEnd(30) ; 
    List.insertAtEnd(40) ; 
    List.insertAtStart(5) ; 
    List.deleteAtEnd() ; 
    List.deleteAtStart();
    List.deleteAtPosition(2);
    List.insertAtPosition(15,2);
    List.display(); 
    List.showHead() ; 
    
 }