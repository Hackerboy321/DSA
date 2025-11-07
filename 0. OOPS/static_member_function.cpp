#include <iostream>
using namespace std ;

class customer
{
    string customerName ; 
    int amount ; 
    static int totalCustomer ; // static data member 
    static int totalBalance ;  // static data member 

    public:
    customer( string customerName , int amount )
    {
        this->customerName = customerName ;
        totalBalance += amount ;  
        totalCustomer++ ; 
    }

    static void display()  // static member function to access and modify the private data member without creating an object.
    {
        cout<<"the total customer : "<<totalCustomer<<endl; 
        cout<<"the total balance of the bank : "<<totalBalance<<endl;
    }

    void deposit(int amount)
    {
        if(amount > 0 )
        {
            totalBalance += amount ;
        }
    }

    void withdraw(int amount)
    {
        if( amount <= totalBalance && amount > 0 )
        {
            totalBalance -= amount ;  
        }
    }

};

int customer:: totalBalance = 0 ;
int customer:: totalCustomer = 0 ;

int main()
{
    customer c1("dk", 1000 ) ; 
    customer c2("aadi", 200 );
    customer::display() ;  
    customer c3("ashish", 5000);
    customer::display();

    
}