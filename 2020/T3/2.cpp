#include<iostream>

using namespace std;

int main()
{
    int A[20][20], n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        A[i][n - 1 - i] = 0;
    }
    int val = n - 1;
    for(int i = 0; i < n - 1; i++)
    {
        
        int x = val;
        for(int j = 0; j + i < n - 1; j++)
        {
            A[i][j] = x;
            x--;
        }
        val--;
    }
    for(int i = 1; i < n; i++)
    {
        int x = 1;
        for(int j = n - i; j < n; j++)
        {
            A[i][j] = x;
            x++;
        }
    }
    for(int i = 0 ; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << A[i][j] <<" ";
        }
        cout << endl;
    }
}