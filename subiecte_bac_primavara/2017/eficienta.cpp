#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("bac.in");

int v1[10000], v2[10000], m, n, l1, l2, x;
int main()
{
    fin >> m >> n;
    for(int i = 0 ; i < m; ++i)
    {
        fin >> x;
        if(x % 2 == 0)
        {
            v1[l1] = x;
            l1++;
        }
    }
    for(int i = 0 ; i < n; ++i)
    {
        fin >> x;
        if(x % 2 == 0)
        {
            v2[l2] = x;
            l2++;
        }
    }
    int i = l1 - 1;
    int j = l2 - 1;
    while(i >= 0 && j >= 0)
    {
        if(v2[j] > v1[i])
            cout << v2[j--] << " ";
        if(v2[j] < v1[i])
            cout << v1[i--] <<" ";
        if(v2[j] == v1[i])
        {
            cout << v1[i] <<" ";
            i--;
            j--;
        }
    }

}