#include<iostream>
using namespace std;
int n, A[20][20];
int main()
{
    cin >> n;
    for(int j = 0 ; j < n; ++j)
    {
        cin >> A[0][j];
    }
    for(int i = 1; i < n; ++i)
    {
        for(int j = n - 1; j >= 0; --j)
        {
            A[i][j] = A[i - 1][j - 1];
        }
        A[i][0] = A[i - 1][n - 1];
    }    
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            cout << A[i][j] <<" ";
        }
        cout << endl;
    }
}