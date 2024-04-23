#include <iostream>

using namespace std;

int Cifre(int n);

int main()
{
    cout << Cifre(9272017);
}

int Cifre(int n)
{
    int v[9] = {0}, nr = 0;
    while(n)
    {
        v[n % 10]++;
        n /= 10;
    }
    for(int i = 0; i <= 9; ++i)
    {
        if(v[i] == 1)
            nr++;
    }
    return nr;
}