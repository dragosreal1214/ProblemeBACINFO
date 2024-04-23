#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
ifstream fin("bac.in");
int x, y, n, x2, x3;
int nrcifre(int a)
{
    int nr = 0;
    while(a)
    {
        nr++;
        a /= 10;
    }
    return nr;
}
int main()
{
    fin >> x >> y >> n;
    x2 = x + 1;
    while(nrcifre(x3) < nrcifre(n))
    {
        x3 = x2 * pow(10, nrcifre(x)) + x;
        x = x2;
        x2 = x3;
    }
    cout << x;
}