#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.in");

int main()
{
    int a, b, poz = 0, x, t1, tf, g = 0;
    fin >> a >> b >> t1;
    for(int i = 2; i <= a; i++)
        fin >> tf;
    for(int i = 1; i <= b; i++)
    {
        fin >> x;
        if(t1 > x && x < tf)
        {
            g = 1;
            cout << i + 1;
            break;
        }
    }
    if(!g)
        cout << "imposibil";
}