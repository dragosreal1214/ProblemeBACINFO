#include<iostream>
using namespace std;
int A[50][50], m, n, B[50][50];
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
    for(int i = 0; i < m - 1; ++i)
    {
        for(int j = 0; j < n - 1; ++j)
        {
            if(i != m - 2 && j != n - 2)
                B[i][j] = A[i][j];
            else
                if(i == m - 2 && j == n - 2)
                    B[i][j] = A[i + 1][j + 1];
                else
                    if(i == m - 2)
                        B[i][j] = A[i + 1][j];
                    else
                        if(j == n - 2)
                            B[i][j] = A[i][j + 1];
        }            
    }
    for(int i = 0; i < m - 1; ++i)
    {
        for(int j = 0; j < n - 1; ++j)
        {
            cout << B[i][j] <<" "; 
        }
        cout << endl;
    }
}