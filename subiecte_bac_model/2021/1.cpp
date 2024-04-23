#include <iostream>

using namespace std;

int prim(int a)
{
    if(a < 2)
        return 0;
    else
    {
        for(int i = 2; i * i <= a; ++i)
        {
            if(a % i == 0)
                return 0;
        }
    }
    return 1;
}


void prime(int n, int &x, int &y)
{
    int gx = 0, gy = 0;
    for(int i = n - 1; !gy; --i)
    {
        if(prim(i))
        {
            y = i;
            gy = 1;
        }
    }
    for(int i = y - 1; !gx; --i)
    {
        if(prim(i))
        {
            x = i;
            gx = 1;
        }
    }
}

int main()
{
    int a, b;
    prime(49, a, b);
    cout << a << " " << b;
}