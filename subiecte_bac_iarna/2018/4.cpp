#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int ultimacif(int a)
{
    while(a > 9)
    {
        a /= 10;
    }
    return a;
}


int main()
{
    int x, y, l = 1, lmax = -1;
    fin >> x;
    while(fin >> y)
    {
        if(x % 10 == ultimacif(y))
        {
            l++;
        }
        else
        {
            if(l > lmax)
                lmax = l;
            l = 1;
        }
        x = y;
    }   
    cout << lmax;
}