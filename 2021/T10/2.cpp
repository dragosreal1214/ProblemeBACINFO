#include<iostream>

using namespace std;

int main()
{
    int m;
    int n;
    cin >> m >> n;
    int A[100][100];
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> A[i][j];
        }
    }
    for(int j = 1; j <= n - 1; j++)
    {
        for(int i = 2; i <= m; i++)
        {
            if(A[1][j] == A[i][m])
            {
                cout << A[1][j] <<" "; 
            }
        }
    }
}