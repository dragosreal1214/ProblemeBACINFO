#include<iostream>
using namespace std;
int main()
{
    int A[20][20], n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        A[i][n + 1 - i] = n;
        int k = 1;
        for(int j = n - i; j >= 1; j--)
        {
            A[i][j] = n - k;
            k++;
        }
        k = 1;
        for(int j = n - i + 2; j <= n; j++)
        {
            A[i][j] = n - k;
            k++;
        }
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cout << A[i][j] <<" ";
        }
        cout << endl;

    }
}