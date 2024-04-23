#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("bac.txt");

int main()
{
    int x;
    int nr = 0;
    int val = 0;
    int poz = 999999999;
    while(fin >> x)
    {
        nr++;
        if(x < 0 && nr < poz)
        {
            val = x;
            poz = nr;
        }
    }
    if(nr - (nr - poz) <= nr - poz + 1)
    {
        cout << nr - poz + 1;
    }
    else
    {
        cout << nr - (nr - poz);
    }
}