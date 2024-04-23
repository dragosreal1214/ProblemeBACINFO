#include<iostream>

using namespace std;

int main()
{
    int A[20][20];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        A[i][n - 1 - i] = 0;
    }
    int cn = n - 1;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j + i < n - 1; j++)
        {
            A[i][j] = cn - j;
        }
        cn--;
    }
    int nr = 1;
    for(int i = n - 1; i > 0; i--)
    {
        for(int j = n - i; j < n; j++)
        {
            A[i][j] = nr;
            nr++;
        }
        nr = 1;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << A[i][j] <<" ";
        }
        cout << endl;
    }
}