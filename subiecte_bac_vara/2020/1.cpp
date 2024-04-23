#include<iostream>
using namespace std;
int suma(int a, int b);
int main()
{
    cout << suma(20, 12);
}
int suma(int a, int b)
{
    int s = 0;
    if(a < b)
    {
        int c = a;
        a = b;
        b = c;
    }
    for(int i = 1; i <= b; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            s += i;
        }
    }
    return s;
}