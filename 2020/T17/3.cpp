#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int main()
{
    int n, v[1000] = {0}, a,b;
    fin >> n;
    for(int i = 0; i < n; i++)
        fin >> v[i];
    while(fin >> a >> b)
    {
        int ls = 0, ld = n - 1;
        int m = (ls + ld) / 2;
        while()
    }
}