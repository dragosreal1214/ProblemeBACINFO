#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("bac.txt");
int main()
{
    int x, v[10] ={0};
    while(fin >> x)
    {
        if(x % 2 == 0)
        {
            v[x]++;
        }
    }
    int i = 0;
    while(i <= 8)
    {
        if(v[i])
        {
            for(int j = 1; j <= v[i]; j++)
            {
                cout << i <<" ";
            }
        }
        i += 2;
    }
}