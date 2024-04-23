#include <iostream>

using namespace std;
int A[20][20], n;
int main()
{
    cin >> n;
    for(int j = 0 ; j < n; ++j)
    {
        A[0][j] = n;
    }
    int cn = n - 1;
    for(int i = 1; i < n; ++i)
    {
        A[i][n - 1] = cn;
        cn--;
    }  
    for(int i = 1; i < n; ++i)
    {
        for(int j = n - 2; j >= 0; --j)
        {
            A[i][j] = A[i][j + 1] + A[i - 1][j];
        }
    }
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; j++)
        {
            cout << A[i][j] <<" ";
        }
        cout << endl;
    }
}