#include <iostream>

using namespace std;

int putere(int n)
{
    int d = 2;
    int pmin = 9999999;
    int factor = 0;
    while(d * d <= n)
    {
        int p = 0;
        while(n % d == 0)
        {
            p++;
            n /= d;
        }
        if(p < pmin && p != 0)
        {
            pmin = p;
            factor = d;
        }
        d++;
    }
    if(n != 1)
    {
        if(1 < pmin)
            factor = n;
    }
    return factor;
}

int main()
{
    cout << putere(12);
}





