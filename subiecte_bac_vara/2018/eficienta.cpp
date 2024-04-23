#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("bac.txt");
int main()
{
    int x = 0, y = 0, l = 0, lmax = -1;
    fin >> x;
    while (fin >> y)
    {
        if(x != y)
        {
            l++;
        }
        else
        {
            if(l > lmax)
            {
                lmax = l;
            }
            x = y;
            l = 0;
        }
    }
    cout << lmax;
}