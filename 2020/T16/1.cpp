#include<iostream>
using namespace std;
int nrDivPrimi(int n);
int main()
{
    cout << nrDivPrimi(9000);
}
int nrDivPrimi(int n)
{
    int d = 2;
    int nr = 0;
    while(d * d <= n)
    {
        int m = 0;
        while(n % d == 0)
        {
            m++;
            n /= d;
        }
        if(m > 0 && m % 2 == 1)
        {
            nr++;
        }
        d++;
    }
    return nr;
}