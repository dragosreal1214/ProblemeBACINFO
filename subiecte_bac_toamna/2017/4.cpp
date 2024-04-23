#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.in");

int maxi = -1, mini = 1001, x, v[1001], r, a1;

int main()
{
    while(fin >> x)
    {
        if(x > maxi)
            maxi = x;
        if(x < mini)
            mini = x;
        v[x]++;
    }
    for(int i = mini; i <= maxi; i++)
    {
        if(v[i] == 1)
        {
           if(a1 == 0)
                a1 = i;
            else
                if(r == 0)
                {
                    r = i - a1;
                    a1 = i;
                }
                else
                {
                    if(i - a1 == r)

                }
        }
    }
}