#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int main()
{
    int x, y, l = 1, lmax = -1, nr = 1;
    fin >> x;
    while(fin >> y)
    {
        if(x % 2 == y % 2)
        {
            l++;
        }
        else
        {
            if(l > lmax)
            {
                lmax = l;
                nr = 1;
            }
            if(l == lmax)
                nr++;
            l = 1;
        }
        x = y;
    }
    cout << nr << " " << lmax;
}