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
        if (head == NULL)
        {
            h
            tail = head;
            cout << value << " is inserted in linked list\n";
            NumberOfNode++;
        }
        else
        {
            node *newNode = new node(value);
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
            tail = head;
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
        if(position < 1 || position > NumberOfNode + 1 )
        {
            cout<<"invalid position\n";
            return ; 
        }

        //if position of insertion is start.
        if(position == 1 )
        {
            insertAtStart(value);
            return ; 
        }

        //if the position of insertion is end.
        if(position == NumberOfNode +1 )
        {
            insertAtEnd(value);
            return ; 
        }

        node* temp = head ; 

        for( int i = 1 ; i < position -1 ; i++)
        {
            temp = temp->next ;
        }

        node* newNode = new node(value) ; 
        newNode->next = temp->next ; 
        temp->next = newNode ; 
        cout<<value<<" is inserted in "<<position<<" position \n";
        NumberOfNode++ ; 
    }

    // for deleting the last node.
    void deleteAtEnd()
    {
        // when the linked list is empty.
        if (isEmpty())
        {
            cout << "Linked List is Empty\n";
        }

        // if the linked list has only one node.
        else if (head->next == NULL)
        {
            node *temp = head;
            cout << head->data << " is deleted\n";
            head = NULL;
            tail = NULL;
            delete temp;
            NumberOfNode--;
        }

        // when the linked list has the multiple node.
        else
        {
            node *curr = head;
            node *prev = NULL;

            while (curr->next != NULL)
            {
                prev = curr;
                curr = curr->next;
            }

            cout << curr->data << " is deleted\n";
            prev->next = NULL;
            delete curr;
            tail = prev;
            NumberOfNode--;
        }
    }

    // for deleting the first node of the linked list.
    void deleteAtStart()
    {
        if (isEmpty())
        {
            cout << "Linked List is Empty\n";
        }

        else
        {
            node *temp = head;
            head = head->next;
            cout << temp->data << " is deleted \n";
            delete temp;
            if (head == NULL)
                tail = NULL;
            NumberOfNode--;
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
                node *temp = head;
                head = head->next;
                cout << temp->data << " is deleted \n";
                delete temp;
                NumberOfNode--;
            }

            // if there is multiple node. and this will also work of if we wnat to delete the last node.
            else
            {
                node *curr = head;
                node *prev = NULL;
                position--;

                while (position--)
                {
                    prev = curr;
                    curr = curr->next;
                }

                prev->next = curr->next;
                cout << curr->data << " is deleted \n";

                // for updating the tail.
                if (curr == tail)
                    tail = prev;

                delete curr;
                NumberOfNode--;
            }
        }
        else
            cout << "invalaid position \n";
    }

    bool isEmpty()
    {
        if (head == NULL)
            return true;
        else
            return false;
    }

    void display()
    {
        node *ptr = head;
        while (ptr != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }

        cout << endl;
    }

    void showHead()
    {
        if (isEmpty())
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
    List.insertAtStart(5);
    List.insertAtStart(6);
    List.insertAtStart(7);
    List.insertAtStart(8);
    List.insertAtStart(9);
    List.display();
    List.showHead();
    List.insertAtPosition(10,1);
    List.display() ;
    List.showHead() ; 
    List.insertAtPosition(4,6);
    List.display();
    List.insertAtPosition(15, 3);
    List.display();
    List.deleteAtPosition(50);
    List.deleteAtEnd();
    List.display();
    List.deleteAtStart();
    List.display();
    List.showHead();
 }