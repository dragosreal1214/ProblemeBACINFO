#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("bac.txt");

struct pozitie 
{
    int p1,p2;
}v[10];
int x, maxi, l;
int main()
{
    while(fin >> x)
    {
        if(v[x].p1 == 0)
        {
            v[x].p1 = l;
        }
        if(l >= v[x].p2)
        {
            v[x].p2 = l;
        }
        l++;
    }
    for(int i = 0; i <= 9; ++i)
    {
        if(v[i].p2 > v[i].p1 && v[i].p2 - v[i].p1 + 1 > maxi)
        {
            maxi = v[i].p2 - v[i].p1 + 1;
        }
    }
    cout << maxi << endl;
    for(int i = 0; i <= 9; ++i)
    {
        if( v[i].p2 - v[i].p1 + 1 == maxi)
        {
            cout << i <<" ";
        }
    }
}