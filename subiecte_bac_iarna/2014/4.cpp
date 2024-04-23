#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("numere.txt");

int main()
{
    int x, max1 = -999999999, max2 = -999999999, g = 0;
    while(fin >> x)
    {
        if(x >= max1 && x % 2 == 0)
            max1 = x;
        else
            if(x > max2 && x % 2 == 0)
            {
                max2 = x;
                g = 1;
            }
    }
    if(!g)
        cout << 0;
    else
        cout << max2 <<" " << max1;
}