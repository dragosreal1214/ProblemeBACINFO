#include<iostream>
using namespace std;
int A[99][99], m, n, max, min, colmin, colmax, lmax, lmin, mini = 999999, maxi = -1;
int main()
{
    cin >> m >> n;
    for(int i = 0; i < m; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            cin >> A[i][j];
            if(A[i][j] >= maxi)
            {
                maxi = A[i][j];
                lmax = i;
                colmax = j;
            }
            if(A[i][j] <= mini)
            {
                mini = A[i][j];
                lmin = i;
                colmin = j;
            }
        }
    } 
    cout << m - 2 << " " << n - 2 << endl;
    for(int i = 0; i < m; ++i)
    {
        if(i != lmax && i != lmin)
        {
            for(int j = 0; j < n; ++j)
            {
                if(j != colmin && j != colmax)
                {
                    cout << A[i][j] << " "; 
                }
            }
            cout << endl;
        }
    }    
}