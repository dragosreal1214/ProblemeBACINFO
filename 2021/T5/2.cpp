#include<iostream>
using namespace std;
int main()
{
    int m, n, A[100][100];
    cin >> m >> n;
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            A[i][j] = i * j % 10;
        }
    }
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cout << A[i][j] <<" ";
        }
        cout << endl;
    }
    
}