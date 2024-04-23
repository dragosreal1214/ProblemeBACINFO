#include<iostream>
using namespace std;
void nrfp(int n, int &m);
bool prim(int a);
int main()
{
    int a= 0;
    nrfp(100, a);
    cout << a;
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
void nrfp(int n, int &m)
{
    int max = 0;
    for(int i = n; i >= 2; i--)
    {
        int nr = 0;
        for(int d = 2; d <= i; d++)
        {
            if(i % d == 0 && prim(d))
            {
                nr++;
            }
        }
        if(nr > max)
        {
            max = nr;
            m = i;
        }
    }
}