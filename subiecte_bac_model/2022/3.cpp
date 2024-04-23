#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int main()
{
    int p1[10] = {0}, p2[10] = {0};
    int x, l = 0, lmax = 0;
    while(fin >> x)
    {
        if(x % 2 == 0)
        {
            if(p1[x] == 0)
                p1[x] = l;
            else
                p2[x] = l;
        }   
        l++;
    }
    for(int i = 0; i < 10; i += 2)
    {
        if(p2[i] - p1[i] + 1 > lmax)
        {
            lmax = p2[i] - p1[i] + 1;
        }
    }
    cout << lmax << endl;
    for(int i = 0; i < 10; i += 2)
    {
        if(p2[i] - p1[i] + 1 == lmax)
        {
            cout << i << " ";
        }
    }
}