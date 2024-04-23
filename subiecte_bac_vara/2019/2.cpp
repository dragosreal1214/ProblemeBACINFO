#include <iostream>

using namespace std;

int A[32][31], m, n, exista = 1;
int main()
{
    cin >> m >> n;
    for(int i = 0; i < m; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            cin >> A[i][j];
        }
    }
    for(int i = 0; i < m / 2 && exista; ++i)
    {
        for(int j = 0; j < n / 2 && exista; ++j)
        {
            if(A[i][j] != A[i][n - j - 1])
                exista = 0;
        }
    }
    if(exista)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }
}