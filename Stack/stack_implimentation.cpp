#include <iostream>
using namespace std;

// Implementation of stack using array
class Stack 
{
public:
    int *arr;
    int size;
    int top;

    Stack(int n)
    {
        size = n;
        top = -1;
        arr = new int[size];
    }

    void push(int value)
    {
        if (top == size - 1)
        {
            cout << "Stack overflow\n";
            return;
        }
        arr[++top] = value;
        cout << value << " is pushed\n";
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack underflow\n";
            return;
        }
        cout << arr[top--] << " is deleted\n";
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Stack elements (top to bottom):\n";
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }

    void peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty\n";
            return;
        }
        cout << "The peek is " << arr[top] << endl;
    }

    bool isEmpty()
    {
        return (top == -1);
    }

    ~Stack()
    {
        delete[] arr;
    }
};

int main()
{
    Stack s(10);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.display();
    s.peek();
    s.pop();
    s.display();
}
