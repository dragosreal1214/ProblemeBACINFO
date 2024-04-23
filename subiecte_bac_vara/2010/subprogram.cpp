#include <iostream>

using namespace std;

void sir(int n, int & a[]);

int main()
{
    int x = 6, b[100] = {0};
    sir(x, b);
    for(int i = 0; i < x; ++i)
    {
        cout << b[i] <<" ";
    }
}

void sir(int n, int & a[])
{
    a[0] = 1;
    a[1] = 1;
    for(int i = 2; i < n; ++i)
    {
        a[i] = 3 * a[i - 1] - a[i - 2];
    }
    for(int i = 2; i < n - 1; ++i)
    {

    }
}