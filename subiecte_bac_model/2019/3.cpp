#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int v[100], a, smax, s;

int main()
{   
    while(fin >> a)
    {
        v[a]++;
    }
    for(int i = 0; i <= 100; i++)
    {
        if(v[i])
            s += v[i];
        else
        {
            if(smax < s)
                smax = s;
            s = 0;
        }
    }
    cout << smax;
}