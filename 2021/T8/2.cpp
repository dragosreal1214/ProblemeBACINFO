#include<iostream>
using namespace std;
int main()
{
    int A[50][50];
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> A[i][j];
        }
    }
    int s = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = n + 1 - i; j <= n; j++)
        {
            cout << A[i][j] <<" "; 
        }
    }
    cout << s;
}