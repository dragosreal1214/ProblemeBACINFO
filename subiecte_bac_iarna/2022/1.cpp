#include <iostream>

using namespace std;

void numimp(int n, int v[], int &c);

int main()
{
    int a;
    int n = 5;
    int v[] = {12, 8, 19, 45, 22};
    numimp(n, v, a);
    cout << a;
}

void numimp(int n, int v[], int &c)
{
    c = 0;
    for(int i = 0; i < n; ++i)
    {
        int nr = 0;
        while(v[i])
        {
            if(v[i] % 10 % 2 == 1)
                nr++;
            v[i] /= 10;
        }
        if(nr >= 1)
            c++;
    }
}