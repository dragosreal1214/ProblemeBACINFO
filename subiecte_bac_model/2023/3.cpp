#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int x, mini = 1000001, n;

int main()
{
    fin >> n;
    int i = 1;
    for(i = 1; i <= n; ++i)
    {
        fin >> x;
        if(x < mini)
        {
            mini = x;
        }
    }
    int l = 0;
    for(int j = i; j <= 2 * n; ++j)
    {
        fin >> x;
        if((mini % 2 != x % 2 && mini > x) || x % 2 == mini % 2)
        {
            l++;
        }
    }
    if(l == n)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }
}