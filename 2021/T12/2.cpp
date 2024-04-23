#include<iostream>
using namespace std;
int main()
{
    int n, A[20][20], k, B[20][20];
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(i == k - 1)
        {
            int aux = A[k - 1][n - 2 - i];
            for(int j = n - 3 - i; j >=0; j--)
            {
                A[k - 1][j + 1] = A[k - 1][j]; 
            }
            A[k - 1][0] = aux;
        }
        else
        {
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < n; j++)
                {   
                    B[i][j] = A[i][j];
                }
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << B[i][j] <<" ";
        }
        cout << endl;
    }
}