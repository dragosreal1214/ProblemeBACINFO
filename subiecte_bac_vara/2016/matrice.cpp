#include<iostream>
using namespace std;
int A[100][100], n;
int main()
{
    cin >> n;
    for(int i = 0 ; i < n; ++i)
    {
        A[i][0] = i + 1;
    }
    for(int j = 0; j < n; ++j)
    {
        A[n - 1][j] = n;
    }
    for(int j = 1; j < n; ++j)
    {
        for(int i = 0; i < n - 1; ++i)
        {
            A[i][j] = A[i][j - 1] + A[i + 1][j - 1];
        }
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