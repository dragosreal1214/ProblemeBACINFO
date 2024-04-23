#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int main()
{
    fin >> a;
    s = a;
    smin = a;
    while(fin >> a)
    {
        if(s + a < 0)
            s = 0;
        else
            s += a;
        if(s > smin)
            smin = s;
    }
    cout << smin;
}
