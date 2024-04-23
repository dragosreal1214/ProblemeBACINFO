#include <iostream>

using namespace std;

float a[50][50], b[51][51], s; 
int k, n;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int j = 0; j < n; j++)
    {
        for(int i = 0; i < n; i++)
        {
            s += a[i][j];
        }
        int a = n / 2;
        b[a][j] = s / n;
        s = 0;
    }
    for(int i = 0; i < n / 2; i++)
    {
        for(int j = 0; j < n; j++)
        {
            b[i][j] = a[i][j];
        }
    }
    for(int i = n / 2 + 1; i < n + 1; i++)
    {
        for(int j = 0; j < n; j++)
        {
            b[i][j] = a[i - 1][j];
        }
    }
    for(int i = 0; i < n + 1; i++)
    {
        for(int j = 0; j < n; j++)
            cout << b[i][j] <<" ";
        cout << endl;
    }
}