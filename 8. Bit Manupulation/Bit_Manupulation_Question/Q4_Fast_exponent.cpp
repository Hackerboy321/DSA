#include <iostream>
using namespace std;

int FastExponent(int base, int power)
{
    int ans = 1;
    while (power > 0)
    {
        int last_digit = power & 1;
        if (last_digit)
        {
            ans = ans * base;
        }
        base = base * base;
        power =power >> 1;
    }
    return ans;
}
int main()
{
   cout<<FastExponent(3,5);
}