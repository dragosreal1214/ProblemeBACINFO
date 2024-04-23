#include <iostream>

using namespace std;

int main()
{
    int A[100][100], nr = 0, m, n;
    cin >> m >> n;
    for(int i = m - 1; i >= 0; --i)
        for(int j = n - 1; j >= 0; --j)
        {
            A[i][j] = nr * nr;
            nr += 2;
        }
    for(int i = 0; i < m; i++)
    {
        for(int j = 0 ; j < n; j++)
            cout << A[i][j] <<" ";
        cout << endl;
    }
}