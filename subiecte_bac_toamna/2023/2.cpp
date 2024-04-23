#include <iostream>

using namespace std;

int main()
{
    int A[20][20], m, n, p = 0, pmax = -1;
    cin >> m >> n;
    for(int i = 0; i < m; ++i)
        for(int j = 0; j < n; ++j)
            cin >> A[i][j];
    for(int i = 0; i < m - 1; i++)  
    {
        for(int j = 0; j < n - 1; j++)
        {    
            p = A[i][j] + A[i + 1][j] + A[i + 1][j + 1] + A[i][j + 1];
            if(p > pmax)
            {
                pmax = p;
            } 
        }
    }
    cout << pmax;
}