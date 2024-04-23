#include <iostream>
#include <fstream>

using namespace std;

ofstream fout("bac.txt");

int main()
{
    int x, y, z;
    cin >> x >> y;
    fout << y << " " << x << " ";
    do
    {
        z = 2 * x - y + 2;
        y = x;
        x = z;
        fout << z <<" ";
    } while(z);
}