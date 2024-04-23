#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("valori.in");

int main()
{
    int n, x, y, flucmin = 1000000000, flucmax = -1, amin = 0, bmin = 0, amax = 0, bmax = 0;
    fin >> n >> x;
    for(int i = 2; i <= n; ++i)
    {
        fin >> y;
        if(abs(x - y) <= flucmin)
        {
            flucmin = abs(x - y);
            amin = x;
            bmin = y;
        }
        if(abs(x - y) >= flucmax)
        {
            flucmax = abs(x - y);
            amax = x;
            bmax = y;
        }
        x = y;
    }
    cout << flucmax << " " << flucmin << '\n' << amax <<" " << bmax << '\n' << amin << " " << bmin;
}