#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("bac.in");
int v[1000];
int main()
{
    int x;
    int nr = 0;
    while(fin >> x)
    {
        v[x]++;
    }
    for(int i = 1; i <= 1000; i++)
    {
        if(v[i] % 2 == 1)
        {
            nr++;
        }
    }
    if(nr <= 1)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }
}