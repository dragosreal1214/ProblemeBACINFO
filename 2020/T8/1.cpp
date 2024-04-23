#include<iostream>
using namespace std;
bool prim(int x);
int suma(int n);
int main()
{
    cout << suma(12);
}
bool prim(int x)
{
    for(int d = 2; d * d <= x; d++)
    {
        if(x % d == 0)
        {
            return 0;
            break;
        }
    }
    return true;
}
int suma(int n)
{
    int s = 0;
    for(int d = 2; d * d <= n; d++)
    {
        if(n % d == 0 && prim(d))
        {
            s += d;
            if(prim(n / d))
            {
                s += n / d;
            }
        }
    }
    return s;
}