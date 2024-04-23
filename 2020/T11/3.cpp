#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int main()
{
    int x, nr = 1, y;
    fin >> x;
    while(fin >> y)
    {
        if(x == y)
            nr++;
        else
        {
            cout << x << " " << nr <<" ";
            nr = 1;
        }
        x = y;
    }
    cout << x << " " << nr;
    return 0;
}