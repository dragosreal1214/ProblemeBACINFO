#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("bac.txt");

int a, b, nr, maxi;

int main()
{
    fin >> a;
    nr++;
    cout << nr <<" ";
    while(fin >> b)
    {
        nr++;
        if(b > a && b >= maxi)
        {
            maxi = b;
            cout << nr << " ";
        }
        a = b;
    }
}