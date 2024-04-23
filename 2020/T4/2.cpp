#include<iostream>
using namespace std;
int main()
{
    int m, n, A[20][20];
    cin >> m >> n;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }
    int nr = 0;
    for(int j = 1; j < n; j++)
    {
        bool exista = false;
        for(int i = 0; i < n; i++)
        {
            if(A[i][0] != A[i][j])
            {
                exista = true;
            }
            else
            {
                exista = false;
                break;
            }
        }
        if(exista)
        {
            nr++;
        }
    }
    cout << nr;
}