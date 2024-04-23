#include <iostream>

using namespace std;

void duplicare(int n, int &d);

int main()
{
    int x;
    duplicare(2019, x);
    cout << x;
}

void duplicare(int n, int &d)
{
    d = 0;
    int p = 1;
    int cn = n;
    while(n)
    {
        if(n % 10 % 2 == 1)
        {
            d = ((n % 10) * 10 + n % 10) * p + d;
            p *= 100;
        }
        else
        {
            d = d + (n % 10) * p;
            p *= 10;
        }
        n /= 10;
    }
    if(d == cn)
    {
        d = -1;
    }
}