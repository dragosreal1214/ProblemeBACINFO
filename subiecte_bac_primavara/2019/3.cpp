#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int main()
{
    int n, maxpar1 = -1, maximpar1 = -1, x, maxpar2 = -1, maximpar2 = -1,;
    fin >> n;
    for(int i = 1; i <= n; ++i)
    {
        fin >> x;
        if(x % 2 == 0 && maxpar1 < x)
            maxpar1 = x;
        if(x % 2 == 1 && maximpar1 < x)
            maximpar1 = x; 
    }
    for(int i = n + 1; i <= 2 * n ; ++i)
    {
        fin >> x;
        if(x % 2 == 0 && maxpar2 < x)
            maxpar2 = x;
        if(x % 2 == 1 && maximpar2 < x)
            maximpar2 = x; 
    }
    
}