#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int main()
{
    int x, y;
    fin >> x;
    while(fin >> y)
    {
        if(x % 2 == 0 && x != y)
        {
            cout << x <<" ";
        }
        x = y;
    }
    if(x % 2 == 0)
    {
        cout << x;
    }
}