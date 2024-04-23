#include <iostream>

using namespace std;

int main()
{
    int A[100][100], n, v[100] = {0};
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for(int j = 0; j < n; j += 2)
    {
        for(int i = 0; i < n; i++)
        {
            A[i][j] = v[n - i - 1];
        }
    }
    for(int j = 1; j < n; j += 2)
    {
        for(int i = 0; i < n; i++)
        {
            A[i][j] = v[i];
        }
    }
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
            cout << A[i][j] << " ";
        cout << endl;
    }
}