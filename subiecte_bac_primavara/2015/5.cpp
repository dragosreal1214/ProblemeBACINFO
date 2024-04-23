#include <iostream>

using namespace std;

int main()
{
    int A[50][50], m, n;
    cin >> m >> n;
    int x = 1;
    for(int i = 0; i < m; i++)
    {
        A[i][0] = x;
        x += 2;
    }
    for(int i = 0; i < m; i++)
    {
        for(int j = 1; j < n; j++)
        {
            A[i][j] = A[i][j - 1] + 1;
        }
    }
    for(int i = 0; i < m; i++)
    {  
        for(int j = 0; j < n; j++)
            cout << A[i][j] <<" ";
        cout << endl;
    }   
}