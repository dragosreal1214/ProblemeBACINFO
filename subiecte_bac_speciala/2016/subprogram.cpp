#include <iostream>

using namespace std;

int minDivPrim(int n);

int main()
{
    cout << minDivPrim(75);
}

int minDivPrim(int n)
{
    int nr = 1;
    int d = 2;
    while(d * d <= n)
    {
        int m = 0;
        while(n % d == 0)
        {
            m++;
            n /= d;
        }
        if(m > 0)
            nr = nr * d;
        d++;
    }
    if(n > 1)
        nr = nr * n;
    return nr;
}