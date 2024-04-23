#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("bac.txt");
int main()
{
    int x = 0, l = 0, lmax = -1, nr = 0;
    while (fin >> x)
    {
        if(x % 2 == 0)
        {
            l++;
        }
        else
        {
            if(l == lmax)
            {
                nr++;
            }
            if(l > lmax)
            {
                lmax = l;
                nr = 1;
            }
            l = 0;
        }
    }
    if(l == lmax)
    {
        nr++;
    }
    if(l > lmax)
    {
        nr = 1;
    }
    cout << nr;
}