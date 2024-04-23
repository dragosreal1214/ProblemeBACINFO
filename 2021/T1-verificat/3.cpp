#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("bac.in");
int v[100];
int main()
{
    int x;
    while(fin >> x)
    {
        if(x > 9 && x < 100)
            v[x] = 1;
    } 
    int nr = 0;
    for(int i = 98; i > 9; i--)
    {
        if (!v[i] && i % 10 !=  i / 10)
        {
            if(nr == 0)
            {
                v[0] = i;
            }
            if(nr == 1)
            {
                v[1] = i;
            }
            nr++;
        }
        if(nr == 2)
            break;
    }
    if(nr == 2)
    {
        cout << v[0] <<" " << v[1];
    }
    else
    {
        cout << "nu exista";
    }
    
}