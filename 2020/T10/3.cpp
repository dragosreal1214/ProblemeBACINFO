#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("bac.txt");
int main()
{
    int x, y, nr = 2, r = 0, rr = 0, max = -1;
    fin >> x >> y;
    r = y - x;
    x = y;
    while (fin >> y)
    {
        if(y - x == r)
        {
            nr++;
        }
        else
        {
            nr = 2;
            r = y - x;
        }
        if(nr > max)
        {
            max = nr;
            rr = r;
        }
        else
        {
            if(nr == max && r > rr)
            {
                rr = r;
            }
        }
        x = y;
    }
    if(max < 3)
    {
        cout << "nu exista";
    }
    else
    {
        cout << rr;
    }
}