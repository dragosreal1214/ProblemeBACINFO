#include <iostream>

using namespace std;

int main()
{
    int A[100][100], n;
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            cin >> A[i][j];
        }
    }
    for(int i = 0; i < n; ++i)
    {
        for(int j = i + 1; j < n; ++j)
        {
            swap(A[i][j - 1], A[i][j]);
        }
    } 
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n - 1; ++j)
        {
            cout << A[i][j] << " ";
        }
        cout << '\n';
    }   
}