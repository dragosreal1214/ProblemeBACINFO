#include<iostream>
using namespace std;
int main()
{
    int A[20][20], m, n, k;
    bool exista = false;
    cin >> m >> n >> k;
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> A[i][j];
        }
    }
    for(int i = k + 1; i <= m; i++)
    {
        int nr = 0;
        for(int j = 1; j <= n; j++)
        {
            if(A[k][j] != A[i][j])
            {
                nr++;
            }
        }
        if(nr == 3)
        {
            exista = true;
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