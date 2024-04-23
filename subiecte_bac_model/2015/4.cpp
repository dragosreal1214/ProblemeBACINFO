#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

ifstream fin("bac.txt");

int main()
{
    int n, x, v[9] = {0}, l = 0, s = 0;
    fin >> n;
    while(fin >> x)
    {
        l++;
        int nr = 0;
        if(x == 1)
            v[0]++;
        else { 
            while(x > 1)
            {
                nr++;
                x /= 2;
            }
            if(nr)
                v[nr]++;
        }
    }
    if(l < n)
        cout << "nu exista";
    else
    {
        for(int i = 9; i >= 0; --i)
        {
            s += v[i];
            if(s >= n)
            {
                cout << pow(2, i);
                break;
            }
        }
    }
}