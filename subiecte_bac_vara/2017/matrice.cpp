#include<iostream>
using namespace std;
int n, m, A[50][50], B[50][50];
int main()
{
    cin >> n >> m;
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            cin >> A[i][j];
        }
    }
    for(int j = 0; j < m; ++j)
    {
        B[0][j] = A[n - 1][m - 1];
    }
    for(int j = 0; j < m; ++j)
    {
        B[n - 1][j] = A[n - 1][m - 1];
    }
    for(int i = 0; i < n; ++i)
    {
        B[i][0] = A[n - 1][m - 1];
    }
    for(int i = 0; i < n; ++i)
    {
        B[i][m - 1] = A[n - 1][m - 1];
    }
    for(int i = 1; i < n - 1; ++i)
    {
        for(int j = 1; j < m - 1; ++j)
        {
            B[i][j] = A[i][j];
        }
    }
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            cout << B[i][j] <<" ";
        }
        cout << endl;
    }
}