#include<iostream>
using namespace std;
bool prim(int x)
{
    for(int d = 2; d * d <= x; d++)
        if(x % d == 0)
        {
            return 0;
            break;
        }
    return 1;
}
void prodprim(int n, int &p)
{
    p = 1;
    for(int d = 2; d * d <= n; d++)
        if(n % d == 0)
        {
            if(prim(d))
                p *= d;
        } 
}
int main()
{
    int p = 1;
    prodprim(2000, p);
    cout << p;
}