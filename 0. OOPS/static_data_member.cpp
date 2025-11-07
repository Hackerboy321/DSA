#include <iostream>
using namespace std ;

class student 
{
    string name ;
    int  roll_no ; 
    static int total_student ; 

    public:

    student(string name , int roll_no)
    { 
        this->name = name ; 
        this->roll_no = roll_no ;
        total_student++; 
    }

    void display()
    {
        cout<<name<<" "<<roll_no<<" "<<total_student<<endl;
    }
};

int student::total_student = 0 ; // static data member ; 

int main()
{
    student s1("dkbose", 25) ;
    student s3("ashish", 17) ;
    student s2("aadi" ,7);
    s1.display() ; 
    s2.display(); 
    s3.display();

}