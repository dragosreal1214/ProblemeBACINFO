#include<iostream>
using namespace std;
int main()
{
    int A[100][100], n, m, x = 1;
    cin >> n >> m;
    for(int i = n; i >= 1; i--)
    {
        for(int j = m; j >= 1; j--)
        {
            A[i][j] = x * x;
            x += 2;
        }
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cout << A[i][j] <<" ";
        }
        cout << endl;
    }
}