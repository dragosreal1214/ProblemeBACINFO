#include<iostream>
using namespace std;
int main()
{
    int A[20][20], B[20][20], n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> A[i][j];
        }
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i == k)
            {
                for(int j = 1; j < k; j++)
                {
                    B[i][j] = A[i][j + 1];
                }
                B[i][k - 1] = A[i][1];
                for(int j = k; j <= n; j++)
                {
                    B[i][j] = A[i][j];
                }
            }
            else
            {
                for(int j = 1; j <= n; j++)
                {
                    B[i][j] = A[i][j];
                }
            }
        }
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cout << B[i][j] <<" ";
        }
        cout << endl;
    } 
}