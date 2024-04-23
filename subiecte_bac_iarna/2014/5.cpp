#include <iostream>

using namespace std;

int A[25][25], m, n;

int main()
{
    cin >> n >> m;
    for(int j = 0; j < m; ++j)
        A[n - 1][j] = 1;
    for(int i = 0; i < n; ++i)
        A[i][m - 1] = 1;
    for(int i = n - 2; i >= 0; --i)
        for(int j = m - 2; j >= 0; --j)
            A[i][j] = (A[i][j + 1] + A[i + 1][j]) % 10;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0 ; j < m; j++)
            cout << A[i][j] <<" ";
        cout << endl;
    }
}