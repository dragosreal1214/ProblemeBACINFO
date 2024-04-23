#include <iostream>

using namespace std;

int main()
{
    int n, A[50][50];
    cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            A[i][j] = 2;
    for(int i = 0; i < n; i++)
    {
        A[i][n - 2 - i] = 1;
        A[i][n - 1 - i] = 1;
        A[i + 1][n - i - 1] = 1;
    }
    for(int i = 0; i < n; i++)
    {  
        for(int j = 0; j < n; j++)
            cout << A[i][j] <<" ";
        cout << endl;
    }
}