#include <iostream>

using namespace std;

void tablou(int n, int k, int &a[]);
int b[100];
int main()
{
    tablou(4, 3, b);
    for(int i = 0; i < 4 * 3; i++)
    {
        cout << b[i] <<" ";
    }
}

void tablou(int n, int k, int &a[])
{
    int x = 1, nr = 0;
    for(int i = 0; i < n * k ; i++)
    {
        if(nr == k)
        {
            x++;
            nr = 0;
        }
        a[i] = x;
        nr++;
    }
}