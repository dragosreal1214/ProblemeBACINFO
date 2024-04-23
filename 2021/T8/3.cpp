#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("bac.txt");
int main()
{
    int x;
    int a = 0, b = 0;
    int nr = 0;
    while(fin >> x)
    {
        if(x % 2 == 1 && nr == 0)
        {
            nr++;
            a = x;
        }
        else
        {
            if(x % 2 == 1 && nr == 1)
            {
                nr++;
                b = x;
            }
            else
            {
                if(x % 2 == 1 && nr > 1)
                {
                    a = b;
                    b = x;
                }
            }
        }
    }
    if(nr < 2)
    {
        cout << "nu exista";
    }
    else
    {
        cout << a << " " << b;
    }
}