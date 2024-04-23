#include <iostream>

using namespace std;


int A[100][100], n;

int main()
{
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= n; ++j)
        {
            cin >> A[i][j];
        }
    }
    for(int j = 1; j <= n; ++j)
    {
        A[0][j] = 1;
        A[n + 1][j] = 1;
    }
    for(int i = 1; i <= n; ++i)
    {
        A[i][0] = 1;
        A[i][n + 1] = 1;
    }  
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= n; ++j)
        {
            if(A[i][j] == 3)
            {
                if(A[i][j + 1] && A[i + 1][j] && A[i - 1][j] && A[i][j - 1])
                {
                    cout << i  << " ";
                }
            }
        }
    }
}