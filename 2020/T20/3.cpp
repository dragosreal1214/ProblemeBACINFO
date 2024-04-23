#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("bac.txt");
int main()
{
    int x, y, max = -1, s = 0;
    fin >> x;
    s = x;
    max = x;
    while(fin >> y)
    {
        if(x % 2 == y % 2)
        {
            s += y; 
        }
        else
        {
            s = y;
        }
        if(s > max)
        {
            max = s;
        }
        x = y;
    }
    cout << max;
}