#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("cheltuieli.in");

int main()
{
    int s[100] = {0}, a, b, c, smax = 0, nr = 0;
    while(fin >> a)
    {
        fin >> b >> c;
        s[a] += b * c;
        if(s[a] > smax)
        {
            smax = s[a];
            nr = 1;
        }
        else
            if(s[a] == smax)
            {
                nr++;
            }
    }
    cout << smax << " " << nr;
}