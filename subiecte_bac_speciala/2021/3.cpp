#include <iostream>
#include <fstream>

using namespace std;

ofstream fout("bac.out");

int main()
{
    int x, y, n = 0;
    cin >> x >> y;
    fout << y << " " << x <<" ";
    n = (y - x) / 2 - 1;
    y = x;
    while(n)
    {
        x = y - 2 * n;
        n--;
        fout << x << " ";
        y = x;
    }
}