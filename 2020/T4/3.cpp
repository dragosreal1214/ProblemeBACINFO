#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("bac.txt");

int main()
{
    int x, a, nr = 1;
    fin >> a;
    while(fin >> x)
    {
        if(a == x)
        {
            nr++;
        }
        else
        {
            if(nr == 2)
                cout << a <<" ";
            a = x;
            nr = 1;
        }
    }
    if(nr == 2)
    {
        cout << x;
    }
}