#include <iostream>
using namespace std;

/* Q - find the sun number 1 to n */
void sum(int n)
{   int s = 0 ;

    for (int i = 1; i <= n; i++)
    {
        s += i ;
    }
    cout<<s; 
}

int main()
{
    sum(7);
    return 0;
}