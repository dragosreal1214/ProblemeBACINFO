#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("bac.txt");
int prefix[99], sufix[99];
int nrcifre(int a)
{
    int nr = 0;
    while(a)
    {
        nr++;
        a /= 10;
    }
    return nr;
}
int main()
{
    int x;
    while(fin >> x)
    {
        if(x > 99)
        {
            if(nrcifre(x) == 3)
            {
                prefix[x / 10]++;
                sufix[x % 100]++; 
            }
            else
            {
                prefix[x / 100]++;
                sufix[x % 100]++;
            }
        }
    }
    int nr = 0;
    for(int i = 10; i <= 99; i++)
    {
        if(prefix[i] == sufix[i] && sufix[i] != 0)
        {
            nr++;
        }
    }
    cout << nr;
}