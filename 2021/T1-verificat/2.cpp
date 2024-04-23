#include <iostream>

using namespace std;

int main()
{
    int n, A[100][100];
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << A[i][0] <<" ";
    }
    for(int j = 1; j < n; j++)
    {
        cout << A[n - 1][j] <<" ";
    }
    for(int i = n - 2; i >= 0; i--)
    {
        cout << A[i][n - 1] << " ";
    }
    for(int j = n - 2; j > 0; j--)
    {
        cout << A[0][j] <<" ";
    }
    return 0;
}

