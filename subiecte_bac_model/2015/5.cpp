#include <iostream>

using namespace std;

int A[20][20], m, n, nr = 1;

int main()
{
    cin >> m >> n;
    for(int i = m - 1; i >= 0; --i)
    {
        for(int j = n - 1; j >= 0; j--)
        {
            if(nr % 3 == 0)
                nr += 2;
            A[i][j] = nr;
            nr += 2;
        }
    }
    for(int i = 0; i < m; i++)
    {  
        for(int j = 0; j < n; j++)
            cout << A[i][j] <<" ";
        cout << endl;
    }
}