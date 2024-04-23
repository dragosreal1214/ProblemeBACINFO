#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("bac.txt");
int main()
{
    int x, a;
    fin >> a;
    int nr = 1;
    while(fin >> x)
    {
        if(a > x)
        {
            nr++;
        }
    }
    cout << nr;
}