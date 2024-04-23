#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int main()
{
    int x, y, a, b, nr = 0;
    fin >> x >> y >> a;
    while(fin >> b)
    {
        if(b > y)
            break;
        if(b >= x && b <= y && b != a)
        {
            nr++;
        }
        a = b;
    }
    cout << nr;
}