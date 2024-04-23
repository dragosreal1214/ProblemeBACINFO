#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int main()
{
    int n, x, y, min1 = 0, min2 = 0, l = 1;
    fin >> n >> x;
    while(l <= n / 2)
    {
        l++;
        fin >> y;
        if(x != y)
        {
            min1 = y;
            min2 = x;
        }
        x = y;
    }
    fin >> y;
    if(min1 != y && min1)
    {
        cout << min1;
    }
    else
    {
        if(min2 != y && min2)
            cout << min2;
        else
            cout << "NU EXISTA";
    }
}