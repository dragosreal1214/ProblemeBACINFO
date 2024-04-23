#include<iostream>
#include<cmath>
using namespace std;
int factori(int m, int n);
int main()
{
    cout << factori(16500, 10780);
}
int factori(int m, int n)
{
    int d = 2;
    int nr = 0;
    while(d <= n)
    {
        int pm = 0;
        while(m % d == 0)
        {
            pm++;
            m /= d;
        }
        int pn = 0;
        while(n % d == 0)
        {
            pn++;
            n /= d;
        }
        if(pn == pm && pn != 0)
            nr++;
        d++;
    }
    return nr;
}