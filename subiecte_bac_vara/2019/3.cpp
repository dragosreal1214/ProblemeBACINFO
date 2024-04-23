#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("bac.txt");

int main()
{
    int x, y, maxi;
    fin >> x;
    maxi = x;
    cout << x <<" ";
    while(fin >> y)
    {
        if(y > x)
        {
            cout << y <<" ";
            maxi = y;
        }
        else
        {
            if(y == x)
            {
                cout << y << " ";
            }
        }
        x = y;
    }
}