#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("numere.in");

int main()
{
    int n, x, y, nr = 0;
    fin >> n >> x;
    while(fin >> y)
    {
        if(x != y)
        {
            nr++;
        }
        x = y;
    }
    cout << n - nr - 1;
}