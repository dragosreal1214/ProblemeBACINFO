#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("date.in");

int m, n, x, fra[99], frb[99], nr;

int main()
{
    fin >> m >> n;
    for(int i = 1; i <= m; i++)
    {
        fin >> x;
        fra[x]++;
    }
    for(int i = 1; i <= n; i++)
    {
        fin >> x;
        frb[x]++;
    }
    for(int i = 0; i < 100; ++i)
    {
        if(fra[i] && frb[i])
        {
            fra[i] > frb[i]?nr += frb[i]:nr += fra[i];
        }
    }
    cout << nr;
}