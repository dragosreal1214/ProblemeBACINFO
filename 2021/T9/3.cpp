#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("numere.txt");
int main()
{
    int v[10] = {0};
    int x;
    while(fin >> x)
    {
       while(x)
       {
            v[x % 10]++;
            x /= 10;
       }   
    }
    for(int i = 9; i >= 0; i--)
    {
        if(v[i])
        {
            for(int j = 1; j <= v[i]; j++)
            {
                cout << i;
            }
        }
    }
}