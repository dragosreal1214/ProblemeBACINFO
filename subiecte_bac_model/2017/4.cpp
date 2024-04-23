#include <iostream>
#include <fstream>

using namespace std;

ofstream fout("bac.txt");

int main()
{
    int x, y;
    cin >> x >> y;
    fout << y <<" " ;
    do
    {
        if(y % 2 == 0)
        {
            y--;
            fout << y <<" ";
        }
        else
        {
            y = (y + 1) / 2;
            fout << y << " ";
        }
    } while (y > x);
}