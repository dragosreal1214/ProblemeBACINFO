#include <iostream>

using namespace std;

int prim(int a);
int interval(int n);

int main()
{
    cout << interval(8);
}

int prim(int a)
{
    for(int d = 2; d * d <= a; d++)
    {
        if(a % d == 0)
            return 0;
    }
    return 1;
}


int interval(int n)
{
    int g = 0;
    int nr = n + 1;
    while(!g)
    {
        if(prim(nr))
            g = 1;
        nr++;
    }
    return nr;
}