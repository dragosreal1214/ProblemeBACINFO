#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int main()
{
    int x, y, z, afisatx = 0, afisaty = 0;
    fin >> x >> y;
    if(x > y)
    {
        int c = x;
        x = y;
        y = c;
    }
    while(fin >> z)
    {
        if(x < z && afisatx == 0)
        {
            cout << x << " " << z << " ";
            afisatx = 1;
        }
        else
        {
            cout << z << " ";
            if(y < z && afisatx == 1)
            {
                cout << y <<" " << z <<" ";
                afisaty = 1;
            }
        }
    }
    if(!afisaty)
        cout << y;
}