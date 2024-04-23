#include <iostream>
using namespace std;
bool prim(int x);
int suma(int n);
int main()
{
    cout << suma(12);
}
bool prim(int x)
{
    if(x < 2)
        return false;
    for(int d = 2; d * d <= x; d++)
    {
        if(x % d == 0)
        {
            return false;
            break;
        }
    }
    return true;
}
int suma(int n)
{
    int s = 0;
    for(int i = 1; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            if(!prim(i))
                s += i;
            if(!prim(n / i))
                s += n / i;
        }
    }
    return s;
}