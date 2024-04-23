#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("bac.in");
int main()
{
    int x;
    int nr = 0;
    int p1 = 0, p2 = 0;
    while (fin >> x)
    {
        nr++;
        if(x >= 0 && p1 == 0)
        {
            p1 = nr;
        }
        if(x >= 0)
        {
            if(nr >= p2)
            {
                p2 = nr;
            }
        }
    }
    if(nr - p1 + 1 < p2)
    {
        cout << p2;
    }
    else
    {
        cout << nr - p1 + 1;
    }
}