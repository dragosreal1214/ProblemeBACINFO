#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int main()
{
    int x, v[100] = {0}, g = 0;
    while(fin >> x)
    {
        while(x > 9)
        {
            int nr = 0;
            nr = x % 10 + (x / 10 % 10) * 10;
            v[nr]++;
            x /= 10;
       
        }   
    }
    for(int i = 10; i < 100; i++)
    {
        if(v[i] == 1)
        {       
            g = 1; 
            cout << i <<" ";
        }
    }
    if(!g)
        cout << "nu exista";
} 