#include<iostream>

using namespace std;

int factori(int n, int m);
bool prim(int a);

int main()
{
    cout << factori(750, 490);
}

int factori(int n, int m)
{
    int nr = 0;
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0 && prim(i))
        {
            if(m % i == 0)
            {
                nr++;
            }
            if(prim(n / i) && m % (n / i) == 0)
            {
                nr++;
            }
        }
    }
    return nr;
}

bool prim(int a)
{
    if(a < 2)
        return 0;
    else
    {
        for(int d = 2 ; d * d <= a; d++)
        {
            if(a % d == 0)
            {
                return 0;
                break;
            }
        }
        return 1;
    }
}